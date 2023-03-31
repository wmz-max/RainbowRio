#include <iostream>
#include <cstring>
#include <stdio.h>
#include <vector>
#include <memory>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "Vsoc_tb.h"

#define HALF_CYCLE 10
#define CRG_CTRL_ADDR 0x2000400
#define MTIMECMP_ADDR 0x2000500
#define MTIME_ADDR 0x2000508
#define MSIP_ADDR 0x2000510
#define STIMECMP_ADDR 0x2000520
#define STIME_ADDR 0x2000528
#define SSIP_ADDR 0x2000530
#define UART_TX_DATA_ADDR 0x2000300
#define UART_RX_DATA_ADDR 0x2000304
#define UART_TX_CTRL_ADDR 0x2000308
#define UART_RX_CTRL_ADDR 0x200030c

#define UART_PRIORITY_ADDR 0x2000100
#define UART_IP_ADDR 0x2000108
#define IRQ_THRESHOLD_ADDR 0x2000110
#define IRQ_RESPONSE_ADDR 0x2000114
#define IRQ_COMPLETE_ADDR 0x2000118
#define UART_EN_ADDR 0x200011c

//mid: 1 core 2 caravel 3 testio(outside) 4 uart(outside)
struct SOC {
    Vsoc_tb* logic;
    VerilatedContext* contextp;
    VerilatedVcdC* tfp;
    void reset();
    void cycle();
    void init();
    void master_write(uint32_t address, uint32_t wdata, int mid);
    void master_read(uint32_t address, int mid);
    void close();
};

void SOC::init(){
    contextp = new VerilatedContext;
    logic = new Vsoc_tb(contextp);
    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true); 
    logic->trace(tfp, 0);
    tfp->open("soc_waves.vcd");
}

void SOC::cycle(){
    contextp->timeInc(HALF_CYCLE);
    logic->clk = 0;
    logic->testio_clk = 0;
    logic->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(HALF_CYCLE);
    logic->clk = 1;
    logic->testio_clk = 1;
    logic->eval();
    tfp->dump(contextp->time());
} // 每个cycle后给外界表现的是上升沿之后的信号

void SOC::reset(){
    logic->clk = 1;
    logic->testio_clk = 1;
    logic->rst = 0;
    logic->eval();
    int i = 0;
    while (i < 10){
        cycle();
        i++;
    }
    //此时位于下降沿底部，且已经计算完成
    contextp->timeInc(HALF_CYCLE*0.5);
    logic->rst = 1;
    logic->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(HALF_CYCLE*0.5);
    logic->clk = 0;
    logic->testio_clk = 0;
    logic->eval();
    tfp->dump(contextp->time());
    //复位完成后在上升沿顶部，且已经计算完成
    contextp->timeInc(HALF_CYCLE);
    logic->clk = 1;
    logic->testio_clk = 1;
    logic->eval();
    tfp->dump(contextp->time());
}

void SOC::master_write(uint32_t address, uint32_t wdata, int mid){
    int time_limit = 0;
    switch(mid){
    case 1:
        logic->m1_cyc = 1;
        logic->m1_stb = 1;
        logic->m1_we = 1;
        logic->m1_wdata = wdata;
        logic->m1_sel = 15;
        logic->m1_addr = address;
        while(time_limit < 1000 && !logic->m1_ack){
            cycle();
            time_limit++;
        }
        if(logic->m1_ack){
            printf("the process that core write data 0x%x to address 0x%x succeed.\n", wdata, address);
            cycle();
            logic->m1_cyc = 0;
            logic->m1_stb = 0;
            logic->eval();
            // tfp->dump(contextp->time());
            if(address == UART_TX_DATA_ADDR){
                for(int tt = 0; tt < 115200 * 11 / 20 + 100; tt++)
                    cycle();
                // printf("time: %d\n", contextp->time());
            } else
                cycle();
        } else if(time_limit == 1000){
            printf("the process that core write data 0x%x to address 0x%x failed.\n", wdata, address);
            close();
            exit(1);
        }
        break;
    case 2:
        logic->m2_cyc = 1;
        logic->m2_stb = 1;
        logic->m2_we = 1;
        logic->m2_wdata = wdata;
        logic->m2_sel = 15;
        logic->m2_addr = address;
        while(time_limit < 1000 && !logic->m2_ack){
            cycle();
            time_limit++;
        }
        if(logic->m2_ack){
            printf("the process that caravel write data 0x%x to address 0x%x succeed.\n", wdata, address);
            cycle();
            logic->m2_cyc = 0;
            logic->m2_stb = 0;
            logic->eval();
            // tfp->dump(contextp->time());
            if(address == UART_TX_DATA_ADDR){
                for(int tt = 0; tt < 115200 * 11 / 20 + 100; tt++)
                    cycle();
                // printf("time: %d\n", contextp->time());
            } else
                cycle();
        } else if(time_limit == 1000){
            printf("the process that caravel write data 0x%x to address 0x%x failed.\n", wdata, address);
            close();
            exit(1);
        }
        break;
    case 3:
        logic->m3_cyc = 1;
        logic->m3_stb = 1;
        logic->m3_we = 1;
        logic->m3_wdata = wdata;
        logic->m3_sel = 15;
        logic->m3_addr = address;
        while(time_limit < 1000 && !logic->m3_ack){
            cycle();
            time_limit++;
        }
        if(logic->m3_ack){
            printf("the process that testio write data 0x%x to address 0x%x succeed.\n", wdata, address);
            cycle();
            logic->m3_cyc = 0;
            logic->m3_stb = 0;
            logic->eval();
            // tfp->dump(contextp->time());
            if(address == UART_TX_DATA_ADDR){
                for(int tt = 0; tt < 115200 * 11 / 20 + 100; tt++)
                    cycle();
                // printf("time: %d\n", contextp->time());
            } else
                cycle();
        } else if(time_limit == 1000){
            printf("the process that testio write data 0x%x to address 0x%x failed.\n", wdata, address);
            close();
            exit(1);
        }
        break;
    case 4:
        if(address != 0x2000300){
            printf("uart writing address wrong!\n");
            break;
        }
        logic->m4_cyc = 1;
        logic->m4_stb = 1;
        logic->m4_we = 1;
        logic->m4_wdata = wdata;
        logic->m4_sel = 15;
        logic->m4_addr = address;
        while(time_limit < 1000 && !logic->m4_ack){
            cycle();
            time_limit++;
        }
        if(logic->m4_ack){
            printf("Uart starts to send data 0x%x succeed.\n", wdata);
            cycle();
            logic->m4_cyc = 0;
            logic->m4_stb = 0;
            logic->eval();
            // tfp->dump(contextp->time());
            if(address == UART_TX_DATA_ADDR){
                for(int tt = 0; tt < 115200 * 11 / 20 + 100; tt++)
                    cycle();
                // printf("time: %d\n", contextp->time());
            } else
                cycle();
        } else if(time_limit == 1000){
            printf("the process that uart send data 0x%x failed.\n", wdata);
            close();
            exit(1);
        }
        break;
    default:
        printf("wrong master id!\n");
        break;
    }
}


void SOC::master_read(uint32_t address, int mid){
    int time_limit = 0;
    switch(mid){
    case 1:
        logic->m1_cyc = 1;
        logic->m1_stb = 1;
        logic->m1_we = 0;
        logic->m1_addr = address;
        while(time_limit < 1000 && !logic->m1_ack){
            cycle();
            time_limit++;
        }
        if(logic->m1_ack){
            printf("the process that core read data from address 0x%x succeed, the value is 0x%x.\n", address, logic->m1_rdata);
            cycle();
            logic->m1_cyc = 0;
            logic->m1_stb = 0;
            logic->eval();
            // tfp->dump(contextp->time());
            cycle();
        } else if(time_limit == 1000){
            printf("the process that core read data from address 0x%x failed.\n", address);
            close();
            exit(1);
        }
        break;
    case 2:
        logic->m2_cyc = 1;
        logic->m2_stb = 1;
        logic->m2_we = 0;
        logic->m2_addr = address;
        while(time_limit < 1000 && !logic->m2_ack){
            cycle();
            time_limit++;
        }
        if(logic->m2_ack){
            printf("the process that caravel read data from address 0x%x succeed, the value is 0x%x.\n", address, logic->m2_rdata);
            cycle();
            logic->m2_cyc = 0;
            logic->m2_stb = 0;
            logic->eval();
            // tfp->dump(contextp->time());
            cycle();
        } else if(time_limit == 1000){
            printf("the process that caravel read data from address 0x%x failed.\n", address);
            close();
            exit(1);
        }
        break;
    case 3:
        logic->m3_cyc = 1;
        logic->m3_stb = 1;
        logic->m3_we = 0;
        logic->m3_addr = address;
        while(time_limit < 1000 && !logic->m3_ack){
            cycle();
            time_limit++;
        }
        if(logic->m3_ack){
            printf("the process that testio read data from address 0x%x succeed, the value is 0x%x.\n", address, logic->m3_rdata);
            cycle();
            logic->m3_cyc = 0;
            logic->m3_stb = 0;
            logic->eval();
            // tfp->dump(contextp->time());
            cycle();
        } else if(time_limit == 1000){
            printf("the process that testio read data from address 0x%x failed.\n", address);
            close();
            exit(1);
        }
        break;
    case 4:
        if(address != UART_RX_DATA_ADDR){
            printf("uart reading address wrong!\n");
            break;
        }
        logic->m4_cyc = 1;
        logic->m4_stb = 1;
        logic->m4_we = 0;
        logic->m4_addr = address;
        while(time_limit < 1000 && !logic->m4_ack){
            cycle();
            time_limit++;
        }
        if(logic->m4_ack){
            printf("the process that uart receive data 0x%x succeed.\n", logic->m4_rdata);
            cycle();
            logic->m4_cyc = 0;
            logic->m4_stb = 0;
            logic->eval();
            // tfp->dump(contextp->time());
                cycle();
        } else if(time_limit == 1000){
            printf("the process that uart receive data failed.\n");
            close();
            exit(1);
        }
        break;
    default:
        printf("wrong master id!\n");
        break;
    }
}

void SOC::close(){
    logic->final();
    delete logic;
    tfp->close();
    delete contextp;
}

int main(){   
    SOC soc;
    soc.init();
    soc.reset();
    soc.master_read(CRG_CTRL_ADDR, 1); //read crg default value
    soc.master_write(CRG_CTRL_ADDR, 0xff, 2);  //pull down reset for all perips and core
    soc.master_write(CRG_CTRL_ADDR, 0x0f, 3); //complete reset
    printf("crg pass!!!\n");
    // start check clint
    // soc.master_read(MSIP_ADDR, 2);
    // soc.master_read(SSIP_ADDR, 3);
    // soc.master_read(MTIME_ADDR, 1);
    // soc.master_read(MTIMECMP_ADDR, 1);
    // soc.master_write(MTIMECMP_ADDR, 0x100, 2);
    // soc.master_write(MSIP_ADDR, 1, 2);
    // soc.master_write(SSIP_ADDR, 1, 3);
    // soc.master_write(MSIP_ADDR, 0, 1);
    // soc.master_write(SSIP_ADDR, 0, 1);
    // printf("clint pass!!!\n");
    // // start check uart
    soc.master_read(UART_TX_CTRL_ADDR, 2);
    soc.master_read(UART_RX_CTRL_ADDR, 3);
    soc.master_write(UART_TX_DATA_ADDR, 0x2f, 1);
    soc.master_write(UART_TX_DATA_ADDR, 0x33, 1);
    soc.master_read(UART_RX_DATA_ADDR, 1);
    // soc.master_read(UART_RX_DATA_ADDR, 1);
    // soc.master_write(UART_TX_DATA_ADDR, 0xa3, 4);
    // soc.master_read(UART_RX_DATA_ADDR, 1); 
    // printf("uart pass!!!\n");
    // // start plic check
    // soc.master_read(UART_PRIORITY_ADDR, 3);
    // soc.master_read(IRQ_THRESHOLD_ADDR, 3);
    // soc.master_read(UART_EN_ADDR, 2);
    // soc.master_write(UART_TX_DATA_ADDR, 0x22, 4);
    // soc.master_read(IRQ_RESPONSE_ADDR, 1);
    // soc.master_read(UART_RX_DATA_ADDR, 1); 
    // soc.master_write(IRQ_COMPLETE_ADDR, 1, 1);
    // printf("plic pass(uart interrupt)!!!\n");
    // printf("SoC pass!\n");

    
    for(int ttt = 0; ttt < 100; ttt++)
        soc.cycle();
    soc.close();
    return 0;
}
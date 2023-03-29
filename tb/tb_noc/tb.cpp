#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "Vtb_mesh.h"

#define HALF_CYCLE 10
VerilatedContext* contextp;
VerilatedVcdC* tfp;
Vtb_mesh* tb_mesh;

void cycle(){
    contextp->timeInc(HALF_CYCLE);
    tb_mesh->clk = 0;
    tb_mesh->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(HALF_CYCLE);
    tb_mesh->clk = 1;
    tb_mesh->eval();
    tfp->dump(contextp->time());
} // 每个cycle后给外界表现的是上升沿之后的信号

void reset(){
    tb_mesh->clk = 1;
    tb_mesh->rstn = 0;
    tb_mesh->eval();
    int i = 0;
    while (i < 20){
        cycle();
        i++;
    }
    //此时位于下降沿底部，且已经计算完成
    contextp->timeInc(HALF_CYCLE*0.5);
    tb_mesh->rstn = 1;
    tb_mesh->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(HALF_CYCLE*0.5);
    tb_mesh->clk = 0;
    tb_mesh->eval();
    tfp->dump(contextp->time());
    //复位完成后在上升沿顶部，且已经计算完成
    contextp->timeInc(HALF_CYCLE);
    tb_mesh->clk = 1;
    tb_mesh->eval();
    tfp->dump(contextp->time());
}

int main(){   

    contextp = new VerilatedContext;
    tb_mesh = new Vtb_mesh(contextp);
    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true); 
    tb_mesh->trace(tfp, 0);
    tfp->open("cache_waves.vcd");
    reset();
    int i = 0;
    for(i = 0; i < 2400; i++)
        cycle();
    printf("multi-router test pass!!!\n");
    tb_mesh->final();
    delete tb_mesh;
    tfp->close();
    delete contextp;
    return 0;
}
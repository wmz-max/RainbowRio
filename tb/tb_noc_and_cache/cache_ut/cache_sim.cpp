#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "Vcache_utop.h"

#define HALF_CYCLE 10
VerilatedContext* contextp;
VerilatedVcdC* tfp;
Vcache_utop* cache_ut;

void cycle(){
    contextp->timeInc(HALF_CYCLE);
    cache_ut->clk = 0;
    cache_ut->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(HALF_CYCLE);
    cache_ut->clk = 1;
    cache_ut->eval();
    tfp->dump(contextp->time());
} // 每个cycle后给外界表现的是上升沿之后的信号

void reset(){
    cache_ut->clk = 1;
    cache_ut->rstn = 0;
    cache_ut->eval();
    int i = 0;
    while (i < 20){
        cycle();
        i++;
    }
    //此时位于下降沿底部，且已经计算完成
    contextp->timeInc(HALF_CYCLE*0.5);
    cache_ut->rstn = 1;
    cache_ut->eval();
    tfp->dump(contextp->time());
    contextp->timeInc(HALF_CYCLE*0.5);
    cache_ut->clk = 0;
    cache_ut->eval();
    tfp->dump(contextp->time());
    //复位完成后在上升沿顶部，且已经计算完成
    contextp->timeInc(HALF_CYCLE);
    cache_ut->clk = 1;
    cache_ut->eval();
    tfp->dump(contextp->time());
}

int main(){   

    contextp = new VerilatedContext;
    cache_ut = new Vcache_utop(contextp);
    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true); 
    cache_ut->trace(tfp, 0);
    tfp->open("cache_waves.vcd");
    reset();
    int i = 0;
    for(i = 0; i < 200000; i++)
        cycle();
    if(i == 200000)
        printf("multi-core test pass!!!\n");
    cache_ut->final();
    delete cache_ut;
    tfp->close();
    delete contextp;
    return 0;
}
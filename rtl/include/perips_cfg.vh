// global configuration 
localparam WB_AD_WIDTH 32
localparam WB_DAT_WIDTH 32
// `define PERIPS_SIZE 2
localparam UART_CLK_FREQ 50_000_000
localparam CORE_NUM 8
// register address
// CLINT
`define MTIMECMP_ADDR 32'h0200_0500
`define MTIME_ADDR 32'h0200_0501
`define MSIP_ADDR 32'h0200_0502
`define STIMECMP_ADDR 32'h0200_0503
`define STIME_ADDR 32'h0200_0504
`define SSIP_ADDR 32'h0200_0505
// PLIC
`define UART_PRIORITY_ADDR 32'h0200_0100
`define GPIO_PRIORITY_ADDR 32'h0200_0104
`define UART_IP_ADDR 32'h0200_0108
`define GPIO_IP_ADDR 32'h0200_010c
`define IRQ_THRESHOLD_ADDR 32'h0200_0110
`define IRQ_RESPONSE_ADDR 32'h0200_0114
`define IRQ_COMPLETE_ADDR 32'h0200_0118
`define UART_EN_ADDR 32'h0200_011c
`define GPIO_EN_ADDR 32'h0200_0120
// GPIO
`define GPIO_SIZE 1
`define GPIO_VALUE_ADDR 32'h200_0200
`define GPIO_INPUT_EN_ADDR 32'h200_0204
`define GPIO_OUTPUT_EN_ADDR 32'h200_0208
`define GPIO_PORT_ADDR 32'h200_020c
// UART
`define UART_TX_DATA_ADDR 32'h0200_0300
`define UART_RX_DATA_ADDR 32'h0200_0304
`define UART_TX_CTRL_ADDR 32'h0200_0308
`define UART_RX_CTRL_ADDR 32'h0200_030c
// CRG
`define CRG_CTRL_ADDR 32'h0200_0400


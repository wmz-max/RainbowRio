CUR_MAKEFILE_PATH:=$(abspath $(lastword $(MAKEFILE_LIST)))
CUR_PATH:=$(patsubst %/,%, $(dir $(CUR_MAKEFILE_PATH)))
SRC_PATH:=$(CUR_PATH)/../rtl

ELFIO_PATH:=$(CUR_PATH)/../../utils/elfio

SIMULATOR_PATH:=$(CUR_PATH)/../../utils/dromajo
SIMULATOR_INC:=$(SIMULATOR_PATH)/include
SIMULATOR_BUILD_PATH:=$(SIMULATOR_PATH)/build

RRVTB_PATH:=$(CUR_PATH)/../../utils/rrvtb

CACHE_SRC := $(shell find find tb_noc_and_cache/cache -type f -name '*.[v]')
CACHE_SRC += $(shell find find tb_noc_and_cache/cache_ebi -type f -name '*.[v]')
SOC_SRC := $(shell find tb_perips/perips -type f -name '*.[v]' ! -name sky130_fd_sc_hd.v) perips_cfg.vh

VERIFLAGS := -Mdir build --timescale 1ns/1ps --timescale-override 1ns/1ps --prof-cfuncs -CFLAGS -DVL_DEBUG\
		  --Wno-WIDTH --Wno-PINMISSING --Wno-VARHIDDEN --Wno-UNUSED --Wno-STMTDLY --Wno-ASSIGNDLY --Wno-LATCH --Wno-COMBDLY  --Wno-WIDTHCONCAT\
		  --Wno-IMPLICIT --Wno-LITENDIAN --Wno-SELRANGE --Wno-UNOPTFLAT --Wno-CASEINCOMPLETE --cc --trace --exe --build



verify_noc_and_cache:
	verilator $(VERIFLAGS) -top-module cache_utop +define+RUBY --Wno-LATCH --Wno-COMBDLY $(CACHE_SRC)  ./tb_noc_and_cache/cache_ut/cache_utop.v ./tb_noc_and_cache/cache_ut/cache_sim.cpp
	-build/Vcache_utop

verify_noc: 
	verilator $(VERIFLAGS) -top-module tb_mesh --Wno-COMBDLY  ./tb_noc/tb_mesh.v ./tb_noc/tb.cpp
	-build/Vtb_mesh

verify_soc:
	verilator $(VERIFLAGS) --top-module soc_tb ./tb_perips/soc_ut/soc_tb.v $(SOC_SRC) ./tb_perips/soc_ut/soc_sim.cpp
	-build/Vsoc_tb

clean:
	rm -rf simv* csrc Verdi* novas* ucli.key core.* .nfs* ./build *.vcd *.out
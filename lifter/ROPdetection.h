#pragma once
#include "includes.h"

bool doesReturnRsp(Function* clonedFunc, BasicBlock& clonedBB, LPVOID file_base, ZyanU8* data);
void test_optxd(Function* clonedFuncx);

void final_optpass(Function* clonedFuncx);


opaque_info isOpaque(Function* function);

void initDetections(LPVOID file_base, ZyanU8* data);

ROP_info isROP(Function* function, BasicBlock& clonedBB, uintptr_t& dest);

JMP_info isJOP(Function* function, uintptr_t& dest);

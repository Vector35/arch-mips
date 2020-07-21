#pragma once

#include "binaryninjaapi.h"
#include "mips.h"

bool GetLowLevelILForInstruction(
		BinaryNinja::Architecture* arch,
		uint64_t addr,
		BinaryNinja::LowLevelILFunction& il,
		mips::Instruction& instr,
		size_t addrSize);

BinaryNinja::ExprId GetConditionForInstruction(BinaryNinja::LowLevelILFunction& il, mips::Instruction& instr);
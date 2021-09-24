#pragma once

#include "binaryninjaapi.h"
#include "lowlevelilinstruction.h"
#include "mips.h"

enum MipsIntrinsic : uint32_t
{
		MIPS_INTRIN_WSBH,
		MIPS_INTRIN_INVALID=0xFFFFFFFF,
};

bool GetLowLevelILForInstruction(
		BinaryNinja::Architecture* arch,
		uint64_t addr,
		BinaryNinja::LowLevelILFunction& il,
		mips::Instruction& instr,
		size_t addrSize);

BinaryNinja::ExprId GetConditionForInstruction(BinaryNinja::LowLevelILFunction& il, mips::Instruction& instr, size_t registerSize);

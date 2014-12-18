#ifndef _VMM_DECODE_H
#define _VMM_DECODE_H

#include "vmm/vmm.h"
#include "vmm/guest_state.h"

int vmm_fetch_instruction(vmm_t *vmm, uint32_t eip, uintptr_t cr3, int len, uint8_t *buf);

int vmm_decode_instruction(uint8_t *instr, int instr_len, int *reg, uint32_t *imm, int *op_len);

// TODO don't have these in a header, make them inline functions
const int vmm_decoder_reg_mapw[] = {
	USER_CONTEXT_EAX,
	USER_CONTEXT_ECX,
	USER_CONTEXT_EDX,
	USER_CONTEXT_EBX,
	USER_CONTEXT_ESP,
	USER_CONTEXT_EBP,
	USER_CONTEXT_ESI,
	USER_CONTEXT_EDI
};

const int vmm_decoder_reg_mapb[] = {
	USER_CONTEXT_EAX,
	USER_CONTEXT_ECX,
	USER_CONTEXT_EDX,
	USER_CONTEXT_EBX,
	USER_CONTEXT_EAX,
	USER_CONTEXT_ECX,
	USER_CONTEXT_EDX,
	USER_CONTEXT_EBX
};

#endif


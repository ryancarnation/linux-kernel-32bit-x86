/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../src/gcc-14.2.0/gcc/config/i386/i386.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 54 "../../src/gcc-14.2.0/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 60 "../../src/gcc-14.2.0/gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 69 "../../src/gcc-14.2.0/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 71 "../../src/gcc-14.2.0/gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 78 "../../src/gcc-14.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 79 "../../src/gcc-14.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 85 "../../src/gcc-14.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 86 "../../src/gcc-14.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 90 "../../src/gcc-14.2.0/gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 94 "../../src/gcc-14.2.0/gcc/common.md"
(CONSTANT_P (op))) && (
#line 95 "../../src/gcc-14.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 99 "../../src/gcc-14.2.0/gcc/common.md"
(CONSTANT_P (op))) && ((
#line 100 "../../src/gcc-14.2.0/gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 101 "../../src/gcc-14.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 105 "../../src/gcc-14.2.0/gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 106 "../../src/gcc-14.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 110 "../../src/gcc-14.2.0/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 111 "../../src/gcc-14.2.0/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 117 "../../src/gcc-14.2.0/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 118 "../../src/gcc-14.2.0/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 123 "../../src/gcc-14.2.0/gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_Bf (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return flags_reg_operand (op, mode);
}
static inline bool
satisfies_constraint_Bg (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return GOT_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_Bm (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return vector_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_Bk (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (memory_operand (op, mode)) && (!(
#line 193 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(ix86_gpr_tls_address_pattern_p (op))));
}
static inline bool
satisfies_constraint_Bn (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (memory_operand (op, mode)) && (!(
#line 198 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_reg_mentioned_p (op))));
}
static inline bool
satisfies_constraint_Br (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return bcst_mem_operand (op, mode);
}
static inline bool
satisfies_constraint_Bs (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return ((!(
#line 206 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && ((!(
#line 207 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_X32))) && (sibcall_memory_operand (op, mode)))) || ((
#line 209 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_X32)) && ((
#line 210 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(Pmode == DImode)) && (GOT_memory_operand (op, mode))));
}
static inline bool
satisfies_constraint_Bw (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return ((!(
#line 215 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_INDIRECT_BRANCH_REGISTER))) && ((!(
#line 216 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_X32))) && (memory_operand (op, mode)))) || ((
#line 218 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_X32)) && ((
#line 219 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(Pmode == DImode)) && (GOT_memory_operand (op, mode))));
}
static inline bool
satisfies_constraint_Bz (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return constant_call_address_operand (op, mode);
}
static inline bool
satisfies_constraint_BC (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 228 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_SSE)) && ((
#line 229 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(op == constm1_rtx)) || (vector_all_ones_operand (op, mode)));
}
static inline bool
satisfies_constraint_BF (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 234 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_SSE)) && (float_vector_all_ones_operand (op, mode));
}
static inline bool
satisfies_constraint_BH (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (vector_all_ones_zero_extend_half_operand (op, mode)) || (vector_all_ones_zero_extend_quarter_operand (op, mode));
}
static inline bool
satisfies_constraint_BM (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 248 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_Wb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 255 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 7)));
}
static inline bool
satisfies_constraint_Ww (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 260 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 15)));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 265 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 31)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 270 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 63)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 275 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, -128, 127)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 281 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(ival == 0xff)) || ((
#line 282 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(ival == 0xffff)) || (
#line 283 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(ival == HOST_WIDE_INT_C (0xffffffff)))));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 288 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 3)));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 294 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 255)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 299 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 127)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 308 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(standard_80387_constant_p (op) > 0));
}
static inline bool
satisfies_constraint_C (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 313 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(op == const0_rtx)) || (const0_operand (op, mode));
}
static inline bool
satisfies_constraint_e (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_We (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (x86_64_immediate_operand (op, mode)) && (
#line 332 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(mode != VOIDmode));
}
static inline bool
satisfies_constraint_Wz (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (x86_64_zext_immediate_operand (op, mode)) && (
#line 339 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(mode != VOIDmode));
}
static inline bool
satisfies_constraint_Wd (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_hilo_int_operand (op, mode);
}
static inline bool
satisfies_constraint_Wf (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_dwzext_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_Ws (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      return true;
    default:
      break;
    }
  return false;
}
static inline bool
satisfies_constraint_Z (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_zext_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_Tv (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return vsib_address_operand (op, mode);
}
static inline bool
satisfies_constraint_Ts (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return address_no_seg_operand (op, mode);
}
static inline bool
satisfies_constraint_jm (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (memory_operand (op, mode)) && (!((
#line 402 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_APX_EGPR)) && (
#line 403 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_rex2reg_mentioned_p (op)))));
}
static inline bool
satisfies_constraint_j_l (rtx op)
{
  return ((GET_CODE (op) == MEM) && ((
#line 408 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 409 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)))) && (!((
#line 410 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_APX_EGPR)) && (
#line 411 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_rex2reg_mentioned_p (op)))));
}
static inline bool
satisfies_constraint_j_g (rtx op)
{
  return ((GET_CODE (op) == MEM) && ((
#line 416 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 417 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)))) && (!((
#line 418 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_APX_EGPR)) && (
#line 419 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_rex2reg_mentioned_p (op)))));
}
static inline bool
satisfies_constraint_jo (rtx op)
{
  return ((GET_CODE (op) == MEM) && (
#line 424 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(offsettable_nonstrict_memref_p (op)))) && (!((
#line 425 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_APX_EGPR)) && (
#line 426 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_rex2reg_mentioned_p (op)))));
}
static inline bool
satisfies_constraint_jV (rtx op)
{
  return ((GET_CODE (op) == MEM) && ((
#line 431 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(memory_address_addr_space_p (GET_MODE (op),
						      XEXP (op, 0),
						      MEM_ADDR_SPACE (op)))) && (!(
#line 434 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(offsettable_nonstrict_memref_p (op)))))) && (!((
#line 435 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_APX_EGPR)) && (
#line 436 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_rex2reg_mentioned_p (op)))));
}
static inline bool
satisfies_constraint_jp (rtx op)
{
  return (
#line 440 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(address_operand (op, VOIDmode))) && (!((
#line 441 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_APX_EGPR)) && (
#line 442 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_rex2reg_mentioned_p (op)))));
}
static inline bool
satisfies_constraint_ja (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (vector_memory_operand (op, mode)) && (!((
#line 447 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_APX_EGPR)) && (
#line 448 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_rex2reg_mentioned_p (op)))));
}
static inline bool
satisfies_constraint_jb (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (vsib_address_operand (op, mode)) && (!((
#line 453 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(TARGET_APX_EGPR)) && (
#line 454 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(x86_extended_rex2reg_mentioned_p (op)))));
}
static inline bool
satisfies_constraint_je (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return apx_ndd_add_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_jM (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return apx_ndd_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_jO (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (apx_ndd_memory_operand (op, mode)) && (
#line 470 "../../src/gcc-14.2.0/gcc/config/i386/constraints.md"
(offsettable_nonstrict_memref_p (op)));
}
#endif /* tm-constrs.h */

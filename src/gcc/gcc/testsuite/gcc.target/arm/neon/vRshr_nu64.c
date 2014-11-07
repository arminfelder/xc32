/* Test the `vRshr_nu64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vRshr_nu64 (void)
{
  uint64x1_t out_uint64x1_t;
  uint64x1_t arg0_uint64x1_t;

  out_uint64x1_t = vrshr_n_u64 (arg0_uint64x1_t, 1);
}

/* { dg-final { scan-assembler "vrshr\.u64\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
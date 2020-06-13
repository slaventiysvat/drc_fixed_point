
#include "fixed_point_math.h"

FIX_32s fix_div(FIX_32s a, FIX_32s b);

FIX_32s fix_mul_rnd(FIX_32s a, FIX_32s b);

FIX_32s fix_add(FIX_32s a, FIX_32s b) {

    return (a + b);

}

FIX_32s fix_sub(FIX_32s a, FIX_32s b);

FIX_32s fix_mul_sat(FIX_32s a, FIX_32s b);

FIX_32s fix_add_sat(FIX_32s a, FIX_32s b);

FIX_32s fix_sub_sat(FIX_32s a, FIX_32s b);

FIX_72 acc_mul(FIX_32s a, FIX_32s b);

FIX_72 acc_mul_add(FIX_72 acc, FIX_32s a, FIX_32s b);

FIX_72 acc_mul_sub(FIX_72 acc, FIX_32s a, FIX_32s b);

FIX_72 acc_ashift(FIX_72 acc, FIX_32s a, FIX_32s b);

FIX_72 acc_shift(FIX_72 acc, FIX_32s a, FIX_32s b);

FIX_32s ashift(FIX_32s a);

FIX_32s shift(FIX_32s a);

FIX_72 mov_acc0(FIX_72 acc, FIX_32s a);

FIX_72 mov_acc1(FIX_72 acc, FIX_32s a);

FIX_72 mov_acc2(FIX_72 acc, FIX_32s a);

FIX_72 get_acc0(FIX_72 acc, FIX_32s a);

FIX_72 get_acc1(FIX_72 acc, FIX_32s a);

FIX_72 get_acc2(FIX_72 acc, FIX_32s a);



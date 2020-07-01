
#include "fixed_point_math.h"

FIX_32s rnd(FIX_64s x)
{
	FIX_32s  result;
	FIX_64s tmp = 0;
	tmp = 0x0000000080000000;
	tmp = tmp + x;
	tmp = tmp >> 32;
	//result = (LVM_FIX32)((x + (LVM_FIX64)0x80000000LL) >> 32);
	result = (FIX_32s)tmp;
	if ((x & 0xFFFFFFFF) == 0x80000000) { // unbias above rounding
		result = result & 0xFFFFFFFE;
	}
	if (result > (FIX_32s)0x7FFFFFFFL) {
		result = (FIX_32s)0x7FFFFFFFL;
	}
	else if (result < (FIX_32s)0x80000000L) {
		result = (FIX_32s)0x80000000L;
	}

	return result;
}

FIX_32s fix_div(FIX_32s a, FIX_32s b);

FIX_32s fix_mul(FIX_32s a, FIX_32s b) {

    return a * b;
}

FIX_32s fix_mul_rnd(FIX_32s a, FIX_32s b) {

	FIX_64s tmp = (FIX_64s)(a)*b;

	return rnd(tmp);

}

FIX_32s fix_add(FIX_32s a, FIX_32s b) {

    return (a + b);

}

FIX_32s fix_sub(FIX_32s a, FIX_32s b) {

	return (a - b);

}

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



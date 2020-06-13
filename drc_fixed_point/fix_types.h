#pragma once

typedef    long int                      FIX_32s;
typedef    long long int                 FIX_64s;
typedef    char                          FIX_8sig;
typedef    unsigned int                  FIX_32uns;

/*structure of accomulator register
----------------------------------------------------------------------
|    acc2 8bit guard bits |    acc1 32bit high   |   acc0 32bit low  |
----------------------------------------------------------------------
*/
typedef struct
{
    FIX_8sig acc2 = 0;
    FIX_32s acc1 = 0;
    FIX_32s acc0 = 0;

} FIX_72;
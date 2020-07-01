#pragma once

typedef    long int                      FIX_32s;
typedef    unsigned int                  FIX_32u;
typedef    long long int                 FIX_64s;
typedef    char                          FIX_8sig;
typedef    unsigned int                  FIX_32uns;

/*structure of accomulator register
----------------------------------------------------------------------
|    acc 8bit guard bits |    acc 32bit high   |   acc 32bit low     |
----------------------------------------------------------------------
*/
typedef struct
{
    FIX_8sig accg = 0;
    FIX_32s acch = 0;
    FIX_32u accl = 0;

} FIX_72;
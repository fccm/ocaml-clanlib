#ifndef _CL_GRADIENT_INC
#define _CL_GRADIENT_INC

#include <ClanLib/Display/2D/gradient.h>

#define CL_Gradient_val(gradient) \
    CL_Gradient( \
        CL_Colorf_val(Field(gradient,0)), \
        CL_Colorf_val(Field(gradient,1)))

#endif // _CL_GRADIENT_INC

#ifndef _CL_SIZE_INC
#define _CL_SIZE_INC

#include <ClanLib/Core/Math/size.h>

value Val_CL_Size(const CL_Size& size);
value Val_CL_Sized(const CL_Sized& size);
value Val_CL_Sizef(const CL_Sizef& size);

CL_Size CL_Size_val(value s);
CL_Sized CL_Sized_val(value s);
CL_Sizef CL_Sizef_val(value s);

#endif // _CL_SIZE_INC

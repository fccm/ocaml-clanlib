#ifndef _CL_COLOR_INC
#define _CL_COLOR_INC

#include <ClanLib/Display/2D/color.h>

value Val_CL_Color(const CL_Color& c);
value Val_CL_Colord(const CL_Colord& c);
value Val_CL_Colorf(const CL_Colorf& c);

CL_Color CL_Color_val(value c);
CL_Colord CL_Colord_val(value c);
CL_Colorf CL_Colorf_val(value c);

#endif // _CL_COLOR_INC

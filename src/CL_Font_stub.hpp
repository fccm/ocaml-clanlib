#ifndef _CL_FONT_INC
#define _CL_FONT_INC

#include <ClanLib/Display/Font/font.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Font(v) (Val_ptr<CL_Font>(v))
#define CL_Font_val(v) (Ptr_val<CL_Font>(v))

#else

#define Val_CL_Font(font) ((value)(font))
#define CL_Font_val(font) ((CL_Font *)(font))

#endif

#endif // _CL_FONT_INC

#ifndef _CL_FONT_VECTOR_INC
#define _CL_FONT_VECTOR_INC

#include <ClanLib/Display/Font/font_vector.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Font_Vector(v) (Val_ptr<CL_Font_Vector>(v))
#define CL_Font_Vector_val(v) (Ptr_val<CL_Font_Vector>(v))

#else

#define Val_CL_Font_Vector(v) ((value)(v))
#define CL_Font_Vector_val(v) ((CL_Font_Vector *)(v))

#endif

#endif // _CL_FONT_VECTOR_INC

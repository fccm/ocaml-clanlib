#ifndef _CL_MAT4F_INC
#define _CL_MAT4F_INC

#include <ClanLib/Core/Math/mat4.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Mat4f(v) (Val_ptr<CL_Mat4f>(v))
#define CL_Mat4f_val(v) (Ptr_val<CL_Mat4f>(v))

#else

#define Val_CL_Mat4f(mat) ((value)(mat))
#define CL_Mat4f_val(mat) ((CL_Mat4f *)(mat))

#endif

#endif // _CL_MAT4F_INC

#ifndef _CL_VEC3F_INC
#define _CL_VEC3F_INC

#include <ClanLib/Core/Math/vec3.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Vec3f(v) (Val_ptr<CL_Vec3f>(v))
#define CL_Vec3f_val(v) (Ptr_val<CL_Vec3f>(v))

#else

#define Val_CL_Vec3f(v) ((value)(v))
#define CL_Vec3f_val(v) ((CL_Vec3f *)(v))

#endif

#endif // _CL_VEC3F_INC

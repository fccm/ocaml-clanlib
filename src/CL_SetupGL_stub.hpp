#ifndef _CL_SETUPGL_INC
#define _CL_SETUPGL_INC

#include <ClanLib/GL/setup_gl.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_SetupGL(v) (Val_ptr<CL_SetupGL>(v))
#define CL_SetupGL_val(v) (Ptr_val<CL_SetupGL>(v))

#else

#define Val_CL_SetupGL(setup_gl) ((value)(setup_gl))
#define CL_SetupGL_val(setup_gl) ((CL_SetupGL *)(setup_gl))

#endif

#endif // _CL_SETUPGL_INC

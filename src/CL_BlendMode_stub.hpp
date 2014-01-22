#ifndef _CL_BLENDMODE_INC
#define _CL_BLENDMODE_INC

#include <ClanLib/Display/Render/blend_mode.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_BlendMode(v) (Val_ptr<CL_BlendMode>(v))
#define CL_BlendMode_val(v) (Ptr_val<CL_BlendMode>(v))

#else

#define Val_CL_BlendMode(bm) ((value)(bm))
#define CL_BlendMode_val(bm) ((CL_BlendMode *)(bm))

#endif

#endif // _CL_BLENDMODE_INC

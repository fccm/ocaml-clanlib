#ifndef _CL_TEXTURE_INC
#define _CL_TEXTURE_INC

#include <ClanLib/Display/Render/texture.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Texture(v) (Val_ptr<CL_Texture>(v))
#define CL_Texture_val(v) (Ptr_val<CL_Texture>(v))

#else

#define Val_CL_Texture(tex) ((value)(tex))
#define CL_Texture_val(tex) ((CL_Texture *)(tex))

#endif

#endif // _CL_TEXTURE_INC

#ifndef _CL_SPRITE_INC
#define _CL_SPRITE_INC

#include <ClanLib/Display/2D/sprite.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Sprite(v) (Val_ptr<CL_Sprite>(v))
#define CL_Sprite_val(v) (Ptr_val<CL_Sprite>(v))

#else

#define Val_CL_Sprite(v) ((value)(v))
#define CL_Sprite_val(v) ((CL_Sprite *)(v))

#endif

#endif // _CL_SPRITE_INC

#ifndef _CL_PALETTE_INC
#define _CL_PALETTE_INC

#include <ClanLib/Display/Image/palette.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Palette(v) (Val_ptr<CL_Palette>(v))
#define CL_Palette_val(v) (Ptr_val<CL_Palette>(v))

#else

#define Val_CL_Palette(v) ((value)(v))
#define CL_Palette_val(v) ((CL_Palette *)(v))

#endif

#endif // _CL_PALETTE_INC

#ifndef _CL_PIXELFORMAT_INC
#define _CL_PIXELFORMAT_INC

#include <ClanLib/Display/Image/pixel_format.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_PixelFormat(v) (Val_ptr<CL_PixelFormat>(v))
#define CL_PixelFormat_val(v) (Ptr_val<CL_PixelFormat>(v))

#else

#define Val_CL_PixelFormat(v) ((value)(v))
#define CL_PixelFormat_val(v) ((CL_PixelFormat *)(v))

#endif

#endif // _CL_PIXELFORMAT_INC

#ifndef _CL_PIXELBUFFER_INC
#define _CL_PIXELBUFFER_INC

#include <ClanLib/Display/Image/pixel_buffer.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_PixelBuffer(v) (Val_ptr<CL_PixelBuffer>(v))
#define CL_PixelBuffer_val(v) (Ptr_val<CL_PixelBuffer>(v))

#else

#define Val_CL_PixelBuffer(v) ((value)(v))
#define CL_PixelBuffer_val(v) ((CL_PixelBuffer *)(v))

#endif

#endif // _CL_PIXELBUFFER_INC

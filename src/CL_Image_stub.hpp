#ifndef _CL_IMAGE_INC
#define _CL_IMAGE_INC

#include <ClanLib/Display/2D/image.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Image(v) (Val_ptr<CL_Image>(v))
#define CL_Image_val(v) (Ptr_val<CL_Image>(v))

#else

#define Val_CL_Image(v) ((value)(v))
#define CL_Image_val(v) ((CL_Image *)(v))

#endif

#endif // _CL_IMAGE_INC

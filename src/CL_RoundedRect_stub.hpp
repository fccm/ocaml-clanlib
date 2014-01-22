#ifndef _CL_ROUNDEDRECT_INC
#define _CL_ROUNDEDRECT_INC

#include <ClanLib/Display/2D/rounded_rect.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_RoundedRect(v) (Val_ptr<CL_RoundedRect>(v))
#define CL_RoundedRect_val(v) (Ptr_val<CL_RoundedRect>(v))

#else

#define Val_CL_RoundedRect(v) ((value)(v))
#define CL_RoundedRect_val(v) ((CL_RoundedRect *)(v))

#endif

#endif // _CL_ROUNDEDRECT_INC

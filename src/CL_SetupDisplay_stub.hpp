#ifndef _CL_SETUPDISPLAY_INC
#define _CL_SETUPDISPLAY_INC

#include <ClanLib/Display/setup_display.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_SetupDisplay(v) (Val_ptr<CL_SetupDisplay>(v))
#define CL_SetupDisplay_val(v) (Ptr_val<CL_SetupDisplay>(v))

#else

#define Val_CL_SetupDisplay(sd) ((value)(sd))
#define CL_SetupDisplay_val(sd) ((CL_SetupDisplay *)(sd))

#endif

#endif // _CL_SETUPDISPLAY_INC

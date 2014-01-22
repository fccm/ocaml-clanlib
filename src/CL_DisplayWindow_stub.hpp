#ifndef _CL_DISPLAYWINDOW_INC
#define _CL_DISPLAYWINDOW_INC

#include <ClanLib/Display/Window/display_window.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_DisplayWindow(v) (Val_ptr<CL_DisplayWindow>(v))
#define CL_DisplayWindow_val(v) (Ptr_val<CL_DisplayWindow>(v))

#else

#define CL_DisplayWindow_val(window) ((CL_DisplayWindow *)(window))
#define Val_CL_DisplayWindow(window) ((value)(window))

#endif

#endif // _CL_DISPLAYWINDOW_INC

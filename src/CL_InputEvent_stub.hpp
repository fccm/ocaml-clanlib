#ifndef _CL_INPUTEVENT_INC
#define _CL_INPUTEVENT_INC

#include <ClanLib/Display/Window/input_event.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_InputEvent(v) (Val_ptr<CL_InputEvent>(v))
#define CL_InputEvent_val(v) (Ptr_val<CL_InputEvent>(v))

#else

#define Val_CL_InputEvent(ev) ((value)(ev))
#define CL_InputEvent_val(ev) ((CL_InputEvent *)(ev))

#endif

#endif // _CL_INPUTEVENT_INC

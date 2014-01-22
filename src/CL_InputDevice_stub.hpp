#ifndef _CL_INPUTDEVICE_INC
#define _CL_INPUTDEVICE_INC

#include <ClanLib/Display/Window/input_device.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_InputDevice(v) (Val_ptr<CL_InputDevice>(v))
#define CL_InputDevice_val(v) (Ptr_val<CL_InputDevice>(v))

#else

#define Val_CL_InputDevice(idev) ((value)(idev))
#define CL_InputDevice_val(idev) ((CL_InputDevice *)(idev))

#endif

#endif // _CL_INPUTDEVICE_INC

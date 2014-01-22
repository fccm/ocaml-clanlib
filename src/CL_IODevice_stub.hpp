#ifndef _CL_IODEVICE_INC
#define _CL_IODEVICE_INC

#include <ClanLib/Core/IOData/iodevice.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_IODevice(v) (Val_ptr<CL_IODevice>(v))
#define CL_IODevice_val(v) (Ptr_val<CL_IODevice>(v))

#else

#define Val_CL_IODevice(v) ((value)(v))
#define CL_IODevice_val(v) ((CL_IODevice *)(v))

#endif

#endif // _CL_IODEVICE_INC

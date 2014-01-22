#ifndef _CL_IODEVICE_MEMORY_INC
#define _CL_IODEVICE_MEMORY_INC

#include <ClanLib/Core/IOData/iodevice_memory.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_IODevice_Memory(v) (Val_ptr<CL_IODevice_Memory>(v))
#define CL_IODevice_Memory_val(v) (Ptr_val<CL_IODevice_Memory>(v))

#else

#define Val_CL_IODevice_Memory(v) ((value)(v))
#define CL_IODevice_Memory_val(v) ((CL_IODevice_Memory *)(v))

#endif

#endif // _CL_IODEVICE_MEMORY_INC

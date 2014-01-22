#ifndef _CL_VIRTUALDIRECTORY_INC
#define _CL_VIRTUALDIRECTORY_INC

#include <ClanLib/Core/IOData/virtual_directory.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_VirtualDirectory(v) (Val_ptr<CL_VirtualDirectory>(v))
#define CL_VirtualDirectory_val(v) (Ptr_val<CL_VirtualDirectory>(v))

#else

#define Val_CL_VirtualDirectory(v) ((value)(v))
#define CL_VirtualDirectory_val(v) ((CL_VirtualDirectory *)(v))

#endif

#endif // _CL_VIRTUALDIRECTORY_INC

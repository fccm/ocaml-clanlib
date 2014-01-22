#ifndef _CL_DATABUFFER_INC
#define _CL_DATABUFFER_INC

#include <ClanLib/Core/System/databuffer.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_DataBuffer(v) (Val_ptr<CL_DataBuffer>(v))
#define CL_DataBuffer_val(v) (Ptr_val<CL_DataBuffer>(v))

#else

#define Val_CL_DataBuffer(v) ((value)(v))
#define CL_DataBuffer_val(v) ((CL_DataBuffer *)(v))

#endif

#endif // _CL_DATABUFFER_INC

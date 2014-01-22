#ifndef _CL_FILE_INC
#define _CL_FILE_INC

#include <ClanLib/Core/IOData/file.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_File(v) (Val_ptr<CL_File>(v))
#define CL_File_val(v) (Ptr_val<CL_File>(v))

#else

#define Val_CL_File(file) ((value)(file))
#define CL_File_val(file) ((CL_File *)(file))

#endif

#endif // _CL_FILE_INC

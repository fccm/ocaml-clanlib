#ifndef _CL_STRING16_INC
#define _CL_STRING16_INC

#include <ClanLib/Core/Text/string_types.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_String16(v) (Val_ptr<CL_String16>(v))
#define CL_String16_val(v) (Ptr_val<CL_String16>(v))

#else

#define Val_CL_String16(cls) ((value)(cls))
#define CL_String16_val(cls) ((CL_String16 *)(cls))

#endif

#endif // _CL_STRING16_INC

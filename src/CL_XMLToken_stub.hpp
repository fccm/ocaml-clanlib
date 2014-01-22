#ifndef _CL_XMLTOKEN_INC
#define _CL_XMLTOKEN_INC

#include <ClanLib/Core/XML/xml_token.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_XMLToken(v) (Val_ptr<CL_XMLToken>(v))
#define CL_XMLToken_val(v) (Ptr_val<CL_XMLToken>(v))

#else

#define Val_CL_XMLToken(v) ((value)(v))
#define CL_XMLToken_val(v) ((CL_XMLToken *)(v))

#endif

#endif // _CL_XMLTOKEN_INC

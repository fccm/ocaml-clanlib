#ifndef _CL_XMLTOKENIZER_INC
#define _CL_XMLTOKENIZER_INC

#include <ClanLib/Core/XML/xml_tokenizer.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_XMLTokenizer(v) (Val_ptr<CL_XMLTokenizer>(v))
#define CL_XMLTokenizer_val(v) (Ptr_val<CL_XMLTokenizer>(v))

#else

#define Val_CL_XMLTokenizer(v) ((value)(v))
#define CL_XMLTokenizer_val(v) ((CL_XMLTokenizer *)(v))

#endif

#endif // _CL_XMLTOKENIZER_INC

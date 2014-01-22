#ifndef _CL_DOMDOCUMENT_INC
#define _CL_DOMDOCUMENT_INC

#include <ClanLib/Core/XML/dom_document.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_DomDocument(v) (Val_ptr<CL_DomDocument>(v))
#define CL_DomDocument_val(v) (Ptr_val<CL_DomDocument>(v))

#else

#define Val_CL_DomDocument(v) ((value)(v))
#define CL_DomDocument_val(v) ((CL_DomDocument *)(v))

#endif

#endif // _CL_DOMDOCUMENT_INC

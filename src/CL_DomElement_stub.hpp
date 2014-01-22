#ifndef _CL_DOMELEMENT_INC
#define _CL_DOMELEMENT_INC

#include <ClanLib/Core/XML/dom_element.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_DomElement(v) (Val_ptr<CL_DomElement>(v))
#define CL_DomElement_val(v) (Ptr_val<CL_DomElement>(v))

#else

#define Val_CL_DomElement(v) ((value)(v))
#define CL_DomElement_val(v) ((CL_DomElement *)(v))

#endif

#endif // _CL_DOMELEMENT_INC

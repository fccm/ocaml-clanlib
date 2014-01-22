#ifndef _CL_DOMNODE_INC
#define _CL_DOMNODE_INC

#include <ClanLib/Core/XML/dom_node.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_DomNode(v) (Val_ptr<CL_DomNode>(v))
#define CL_DomNode_val(v) (Ptr_val<CL_DomNode>(v))

#else

#define Val_CL_DomNode(v) ((value)(v))
#define CL_DomNode_val(v) ((CL_DomNode *)(v))

#endif

#define Val_CL_DomString Val_CL_StringRef

#endif // _CL_DOMNODE_INC

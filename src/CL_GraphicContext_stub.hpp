#ifndef _CL_GRAPHICCONTEXT_INC
#define _CL_GRAPHICCONTEXT_INC

#include <ClanLib/Display/Render/graphic_context.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_GraphicContext(v) (Val_ptr<CL_GraphicContext>(v))
#define CL_GraphicContext_val(v) (Ptr_val<CL_GraphicContext>(v))

#else

#define Val_CL_GraphicContext(gc) ((value)(gc))
#define CL_GraphicContext_val(gc) ((CL_GraphicContext *)(gc))

#endif

#endif // _CL_GRAPHICCONTEXT_INC

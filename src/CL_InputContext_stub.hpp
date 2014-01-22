#ifndef _CL_INPUTCONTEXT_INC
#define _CL_INPUTCONTEXT_INC

#include <ClanLib/Display/Window/input_context.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_InputContext(v) (Val_ptr<CL_InputContext>(v))
#define CL_InputContext_val(v) (Ptr_val<CL_InputContext>(v))

#else

#define Val_CL_InputContext(ic) ((value)(ic))
#define CL_InputContext_val(ic) ((CL_InputContext *)(ic))

#endif

#endif // _CL_INPUTCONTEXT_INC

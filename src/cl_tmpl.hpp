#ifndef _CL_Foo_INC
#define _CL_Foo_INC

#include <ClanLib/

#ifdef CL_WRAP_POINTERS

#define Val_CL_Foo(v) (Val_ptr<CL_Foo>(v))
#define CL_Foo_val(v) (Ptr_val<CL_Foo>(v))

#else

#define Val_CL_Foo(v) ((value)(v))
#define CL_Foo_val(v) ((CL_Foo *)(v))

#endif

#endif // _CL_Foo_INC

#ifndef _CL_PRIMITIVESARRAY_INC
#define _CL_PRIMITIVESARRAY_INC

#include <ClanLib/Display/Render/primitives_array.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_PrimitivesArray(v) (Val_ptr<CL_PrimitivesArray>(v))
#define CL_PrimitivesArray_val(v) (Ptr_val<CL_PrimitivesArray>(v))

#else

#define Val_CL_PrimitivesArray(v) ((value)(v))
#define CL_PrimitivesArray_val(v) ((CL_PrimitivesArray *)(v))

#endif

#endif // _CL_PRIMITIVESARRAY_INC

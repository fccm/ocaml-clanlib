#include "cl_caml_incs.hpp"

CAMLextern_C
value caml_are_pointers_boxed(value unit)
{
#ifdef CL_WRAP_POINTERS
    return Val_true;
#else
    return Val_false;
#endif
}

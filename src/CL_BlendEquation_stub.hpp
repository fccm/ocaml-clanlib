#ifndef _CL_BLENDEQUATION_INC
#define _CL_BLENDEQUATION_INC

#include <ClanLib/Display/Render/blend_mode.h>

/* Conversions of enum: CL_BlendEquation */

static const CL_BlendEquation ocaml_table_CL_BlendEquation[] = {
    cl_blend_equation_add,
    cl_blend_equation_subtract,
    cl_blend_equation_reverse_subtract,
    cl_blend_equation_min,
    cl_blend_equation_max,
};

#define CL_BlendEquation_val(v)  (ocaml_table_CL_BlendEquation[Long_val(v)])

static inline value
Val_CL_BlendEquation(CL_BlendEquation e)
{
    switch (e)
    {
        case cl_blend_equation_add:               return Val_long(0);
        case cl_blend_equation_subtract:          return Val_long(1);
        case cl_blend_equation_reverse_subtract:  return Val_long(2);
        case cl_blend_equation_min:               return Val_long(3);
        case cl_blend_equation_max:               return Val_long(4);

        default: caml_failwith("cl_BlendEquation");
    }
    caml_failwith("cl_BlendEquation");
}

#endif // _CL_BLENDEQUATION_INC
// vim: sw=4 sts=4 ts=4 et

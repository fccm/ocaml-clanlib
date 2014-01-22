#ifndef _CL_BLENDFUNC_INC
#define _CL_BLENDFUNC_INC

#include <ClanLib/Display/Render/blend_mode.h>

/* Conversions of enum: CL_BlendFunc */

static const CL_BlendFunc ocaml_table_CL_BlendFunc[] = {
    cl_blend_zero,
    cl_blend_one,
    cl_blend_dest_color,
    cl_blend_src_color,
    cl_blend_one_minus_dest_color,
    cl_blend_one_minus_src_color,
    cl_blend_src_alpha,
    cl_blend_one_minus_src_alpha,
    cl_blend_dest_alpha,
    cl_blend_one_minus_dest_alpha,
    cl_blend_src_alpha_saturate,
    cl_blend_constant_color,
    cl_blend_one_minus_constant_color,
    cl_blend_constant_alpha,
    cl_blend_one_minus_constant_alpha,
};

#define CL_BlendFunc_val(v)  (ocaml_table_CL_BlendFunc[Long_val(v)])


value
Val_CL_BlendFunc(CL_BlendFunc e)
{
    switch (e)
    {
        case cl_blend_zero:                     return Val_long(0);
        case cl_blend_one:                      return Val_long(1);
        case cl_blend_dest_color:               return Val_long(2);
        case cl_blend_src_color:                return Val_long(3);
        case cl_blend_one_minus_dest_color:     return Val_long(4);
        case cl_blend_one_minus_src_color:      return Val_long(5);
        case cl_blend_src_alpha:                return Val_long(6);
        case cl_blend_one_minus_src_alpha:      return Val_long(7);
        case cl_blend_dest_alpha:               return Val_long(8);
        case cl_blend_one_minus_dest_alpha:     return Val_long(9);
        case cl_blend_src_alpha_saturate:       return Val_long(10);
        case cl_blend_constant_color:           return Val_long(11);
        case cl_blend_one_minus_constant_color: return Val_long(12);
        case cl_blend_constant_alpha:           return Val_long(13);
        case cl_blend_one_minus_constant_alpha: return Val_long(14);

        default: caml_failwith("cl_BlendFunc");
    }
    caml_failwith("cl_BlendFunc");
}

#endif // _CL_BLENDFUNC_INC
// vim: sw=4 sts=4 ts=4 et

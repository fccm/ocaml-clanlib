/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Render/blend_mode.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_BlendMode_stub.hpp"
#include "CL_Color_stub.hpp"
#include "CL_BlendEquation_stub.hpp"
#include "CL_BlendFunc_stub.hpp"

CAMLextern_C value
caml_CL_BlendMode_init(value unit)
{
    CL_BlendMode *blend_mode = new CL_BlendMode();
    return Val_CL_BlendMode(blend_mode);
}

CAMLextern_C value
caml_CL_BlendMode_delete(value blend_mode)
{
    delete CL_BlendMode_val(blend_mode);
    nullify_ptr(blend_mode);
    return Val_unit;
}

CAMLextern_C value
caml_CL_BlendMode_eq(value bm1, value bm2)
{
    bool eq = CL_BlendMode_val(bm1) == CL_BlendMode_val(bm2);
    return Val_bool(eq);
}

CALL_GETTER(CL_BlendMode, get_blend_color,               CL_Colorf, CL_Color.f )
CALL_GETTER(CL_BlendMode, get_blend_equation,            CL_BlendEquation, CL_BlendEquation.t )
CALL_GETTER(CL_BlendMode, get_blend_equation_alpha,      CL_BlendEquation, CL_BlendEquation.t )
CALL_GETTER(CL_BlendMode, get_blend_function_src,        CL_BlendFunc,     CL_BlendFunc.t )
CALL_GETTER(CL_BlendMode, get_blend_function_dest,       CL_BlendFunc,     CL_BlendFunc.t )
CALL_GETTER(CL_BlendMode, get_blend_function_src_alpha , CL_BlendFunc,     CL_BlendFunc.t )
CALL_GETTER(CL_BlendMode, get_blend_function_dest_alpha, CL_BlendFunc,     CL_BlendFunc.t )
CALL_GETTER(CL_BlendMode, is_blend_enabled,              bool, bool )

CALL_METH1(CL_BlendMode, enable_blending, Bool_val, bool )
CALL_METH1(CL_BlendMode, set_blend_color, CL_Colorf_val, CL_Color.f )
CALL_METH2(CL_BlendMode, set_blend_equation,
                   CL_BlendEquation_val, color:CL_BlendEquation.t,
                   CL_BlendEquation_val, alpha:CL_BlendEquation.t )
CALL_METH4(CL_BlendMode, set_blend_function,
                   CL_BlendFunc_val,        src:CL_BlendFunc.t,
                   CL_BlendFunc_val,       dest:CL_BlendFunc.t,
                   CL_BlendFunc_val,  src_alpha:CL_BlendFunc.t,
                   CL_BlendFunc_val, dest_alpha:CL_BlendFunc.t )

#ifdef GEN_CAML_CODE

ML_CALL_GETTER(CL_BlendMode, get_blend_color,               CL_Colorf, CL_Color.f )
ML_CALL_GETTER(CL_BlendMode, get_blend_equation,            CL_BlendEquation, CL_BlendEquation.t )
ML_CALL_GETTER(CL_BlendMode, get_blend_equation_alpha,      CL_BlendEquation, CL_BlendEquation.t )
ML_CALL_GETTER(CL_BlendMode, get_blend_function_src,        CL_BlendFunc,     CL_BlendFunc.t )
ML_CALL_GETTER(CL_BlendMode, get_blend_function_dest,       CL_BlendFunc,     CL_BlendFunc.t )
ML_CALL_GETTER(CL_BlendMode, get_blend_function_src_alpha , CL_BlendFunc,     CL_BlendFunc.t )
ML_CALL_GETTER(CL_BlendMode, get_blend_function_dest_alpha, CL_BlendFunc,     CL_BlendFunc.t )
ML_CALL_GETTER(CL_BlendMode, is_blend_enabled,              bool, bool )
   
ML_CALL_METH1(CL_BlendMode, enable_blending, Bool_val, bool )
ML_CALL_METH1(CL_BlendMode, set_blend_color, CL_Colorf_val, CL_Color.f )
ML_CALL_METH2(CL_BlendMode, set_blend_equation,
                   CL_BlendEquation_val, color:CL_BlendEquation.t,
                   CL_BlendEquation_val, alpha:CL_BlendEquation.t )
ML_CALL_METH4(CL_BlendMode, set_blend_function,
                   CL_BlendFunc_val,        src:CL_BlendFunc.t,
                   CL_BlendFunc_val,       dest:CL_BlendFunc.t,
                   CL_BlendFunc_val,  src_alpha:CL_BlendFunc.t,
                   CL_BlendFunc_val, dest_alpha:CL_BlendFunc.t )
#endif

// vim: sw=4 sts=4 ts=4 et

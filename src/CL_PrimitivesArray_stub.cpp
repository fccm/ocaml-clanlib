/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Render/primitives_array.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_PrimitivesArray_stub.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_Vec3f_stub.hpp"

CAMLextern_C value
caml_CL_PrimitivesArray_init(value unit)
{
    CL_PrimitivesArray *pa = new CL_PrimitivesArray();
    return Val_CL_PrimitivesArray(pa);
}

CAMLextern_C value
caml_CL_PrimitivesArray_init_with_gc(value gc)
{
    CL_PrimitivesArray *pa = new CL_PrimitivesArray(*CL_GraphicContext_val(gc));
    return Val_CL_PrimitivesArray(pa);
}

CAMLextern_C value
caml_CL_PrimitivesArray_delete(value pa)
{
    delete CL_PrimitivesArray_val(pa);
    nullify_ptr(pa);
    return Val_unit;
}

CAMLextern_C value
caml_CL_PrimitivesArray_set_attribute(value pa, value index, value val)
{
    CL_PrimitivesArray_val(pa)->set_attribute(
            Long_val(index), *CL_Vec3f_val(val));
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et

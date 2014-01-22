/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Window/display_window.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_DisplayWindow_stub.hpp"
#include "CL_DisplayWindowDescription_stub.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_InputContext_stub.hpp"
#include "CL_DisplayTarget_stub.hpp"

CAMLextern_C value
caml_CL_DisplayWindow_init(value title, value width, value height)
{
    CL_DisplayWindow *window =
        new CL_DisplayWindow(
                String_val(title), Int_val(width), Int_val(height));
    return Val_CL_DisplayWindow(window);
}

CAMLextern_C value
caml_CL_DisplayWindow_of_desc(value desc, value target, value unit)
{
    CL_DisplayWindow *window;
    if (target == Val_none)
        window = new CL_DisplayWindow(
                *CL_DisplayWindowDescription_val(desc));
    else
        window = new CL_DisplayWindow(
                *CL_DisplayWindowDescription_val(desc),
                *CL_DisplayTarget_val(Some_val(target)));
    return Val_CL_DisplayWindow(window);
}

CAMLextern_C value
caml_CL_DisplayWindow_delete(value window)
{
    delete CL_DisplayWindow_val(window);
    nullify_ptr(window);
    return Val_unit;
}

CAMLextern_C value
caml_CL_DisplayWindow_flip(value window)
{
    CL_DisplayWindow_val(window)->flip();
    return Val_unit;
}

CAMLextern_C value
caml_CL_DisplayWindow_flipi(value window, value interval)
{
    CL_DisplayWindow_val(window)->flip(Int_val(interval));
    return Val_unit;
}

CAMLextern_C value
caml_CL_DisplayWindow_get_gc(value window)
{
    CL_GraphicContext *gc = new CL_GraphicContext();
    *gc = CL_DisplayWindow_val(window)->get_gc();
    return Val_CL_GraphicContext(gc);
}

CAMLextern_C value
caml_CL_DisplayWindow_get_ic(value window)
{
    CL_InputContext *ic = new CL_InputContext();
    *ic = CL_DisplayWindow_val(window)->get_ic();
    return Val_CL_InputContext(ic);
}

// vim: sw=4 sts=4 ts=4 et

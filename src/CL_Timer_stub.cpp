/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/System/timer.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"

#define Val_CL_Timer(tm) ((value)(tm))
#define CL_Timer_val(tm) ((CL_Timer *)(tm))

CAMLextern_C value
caml_CL_Timer_init(value unit)
{
    CL_Timer *timer = new CL_Timer();
    return Val_CL_Timer(timer);
}

CAMLextern_C value
caml_CL_Timer_delete(value timer)
{
    delete CL_Timer_val(timer);
    nullify_ptr(timer);
    return Val_unit;
}

CALL_GETTER( CL_Timer, is_repeating, bool, bool )
CALL_GETTER( CL_Timer, get_timeout, unsigned_int, uint )
CALL_METH0( CL_Timer, stop )

CALL_METH2( CL_Timer, start, UInt_val, timeout:uint, Bool_val, repeat:bool )

#ifdef GEN_CAML_CODE
ML_CALL_GETTER( CL_Timer, is_repeating, bool, bool )
ML_CALL_GETTER( CL_Timer, get_timeout, unsigned_int, uint )
ML_CALL_METH0( CL_Timer, stop )
ML_CALL_METH2( CL_Timer, start, UInt_val, timeout:uint, Bool_val, repeat:bool )
#endif

// vim: sw=4 sts=4 ts=4 et

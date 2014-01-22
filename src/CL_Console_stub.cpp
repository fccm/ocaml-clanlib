/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Text/console.h>
#include "cl_caml_incs.hpp"

CAMLextern_C value
caml_CL_Console_write_line(value str)
{
    CL_Console::write_line(String_val(str));
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et

/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/XML/xml_tokenizer.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_XMLTokenizer_stub.hpp"
#include "CL_XMLToken_stub.hpp"
#include "CL_File_stub.hpp"

CAMLextern_C value
caml_CL_XMLTokenizer_init(value unit)
{
    CL_XMLTokenizer *tkn = new CL_XMLTokenizer();
    return Val_CL_XMLTokenizer(tkn);
}

CAMLextern_C value
caml_CL_XMLTokenizer_init_from_file(value file)
{
    CL_XMLTokenizer *tkn = new CL_XMLTokenizer(*CL_File_val(file));
    return Val_CL_XMLTokenizer(tkn);
}

CAMLextern_C value
caml_CL_XMLTokenizer_delete(value tkn)
{
    delete CL_XMLTokenizer_val(tkn);
    nullify_ptr(tkn);
    return Val_unit;
}

CAMLextern_C value
caml_CL_XMLTokenizer_set_eat_whitespace(value tkn, value enable)
{
    CL_XMLTokenizer_val(tkn)->set_eat_whitespace(Bool_val(enable));
    return Val_unit;
}

CAMLextern_C value
caml_CL_XMLTokenizer_next(value tkn)
{
    CL_XMLToken token =
        CL_XMLTokenizer_val(tkn)->next();
    if (token.type == CL_XMLToken::NULL_TOKEN)
        caml_raise_not_found();
    CL_XMLToken *tkp = new CL_XMLToken(token);
    return Val_CL_XMLToken(tkp);
}

// vim: sw=4 sts=4 ts=4 et

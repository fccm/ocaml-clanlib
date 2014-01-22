/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/XML/dom_document.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_DomDocument_stub.hpp"
#include "CL_DomElement_stub.hpp"
#include "CL_File_stub.hpp"

CAMLextern_C value
caml_CL_DomDocument_init(value unit)
{
    CL_DomDocument *doc = new CL_DomDocument();
    return Val_CL_DomDocument(doc);
}

CAMLextern_C value
caml_CL_DomDocument_init_from_file(value file)
{
    CL_DomDocument *doc = new CL_DomDocument(
            *CL_File_val(file));
    return Val_CL_DomDocument(doc);
}
    /*
    CL_DomDocument(CL_IODevice &input, bool eat_whitespace = true);
    CL_DomDocument(
        const CL_DomString &namespace_uri,
        const CL_DomString &qualified_name,
        const CL_DomDocumentType &doctype);
    CL_DomDocument(const CL_SharedPtr<CL_DomNode_Generic> &impl);
    */

CAMLextern_C value
caml_CL_DomDocument_delete(value doc)
{
    delete CL_DomDocument_val(doc);
    nullify_ptr(doc);
    return Val_unit;
}

CAMLextern_C value
caml_CL_DomDocument_get_document_element(value doc)
{
    CL_DomElement elem =
        CL_DomDocument_val(doc)->get_document_element();
    CL_DomElement *ret = new CL_DomElement(elem);
    return Val_CL_DomElement(ret);
}

// vim: sw=4 sts=4 ts=4 et

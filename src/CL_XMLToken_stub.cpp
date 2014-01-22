/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/XML/xml_token.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_XMLToken_stub.hpp"

CAMLextern_C value
caml_CL_XMLToken_init(value unit)
{
    CL_XMLToken *token = new CL_XMLToken();
    return Val_CL_XMLToken(token);
}

CAMLextern_C value
caml_CL_XMLToken_delete(value token)
{
    delete CL_XMLToken_val(token);
    nullify_ptr(token);
    return Val_unit;
}

CAMLextern_C value
caml_CL_XMLToken_get_name(value token)
{
    return Val_CL_StringRef(
        CL_XMLToken_val(token)->name);
}

CAMLextern_C value
caml_CL_XMLToken_get_value(value token)
{
    return Val_CL_StringRef(
        CL_XMLToken_val(token)->value);
}

// conversion of enum TokenType
static const CL_XMLToken::TokenType caml_table_TokenType[] = {
    CL_XMLToken::NULL_TOKEN,
    CL_XMLToken::ELEMENT_TOKEN,
    CL_XMLToken::TEXT_TOKEN,
    CL_XMLToken::CDATA_SECTION_TOKEN,
    CL_XMLToken::ENTITY_REFERENCE_TOKEN,
    CL_XMLToken::ENTITY_TOKEN,
    CL_XMLToken::PROCESSING_INSTRUCTION_TOKEN,
    CL_XMLToken::COMMENT_TOKEN,
    CL_XMLToken::DOCUMENT_TYPE_TOKEN,
    CL_XMLToken::NOTATION_TOKEN,
};

#define TokenType_val(v) \
    (caml_table_TokenType[Long_val(v)])

value Val_TokenType(CL_XMLToken::TokenType e)
{
    switch (e) {
        case CL_XMLToken::NULL_TOKEN:              return Val_long(0);
        case CL_XMLToken::ELEMENT_TOKEN:           return Val_long(1);
        case CL_XMLToken::TEXT_TOKEN:              return Val_long(2);
        case CL_XMLToken::CDATA_SECTION_TOKEN:     return Val_long(3);
        case CL_XMLToken::ENTITY_REFERENCE_TOKEN:  return Val_long(4);
        case CL_XMLToken::ENTITY_TOKEN:            return Val_long(5);
        case CL_XMLToken::PROCESSING_INSTRUCTION_TOKEN:  return Val_long(6);
        case CL_XMLToken::COMMENT_TOKEN:           return Val_long(7);
        case CL_XMLToken::DOCUMENT_TYPE_TOKEN:     return Val_long(8);
        case CL_XMLToken::NOTATION_TOKEN:          return Val_long(9);
        default: caml_failwith("token_type");
    }
    caml_failwith("token_type");
}

CAMLextern_C value
caml_CL_XMLToken_get_type(value token)
{
    return Val_TokenType(
        CL_XMLToken_val(token)->type);
}

// conversion of enum TokenVariant
static const CL_XMLToken::TokenVariant caml_table_TokenVariant[] = {
    CL_XMLToken::BEGIN,
    CL_XMLToken::END,
    CL_XMLToken::SINGLE
};

#define TokenVariant_val(v) \
    (caml_table_TokenVariant[Long_val(v)])

value Val_TokenVariant(CL_XMLToken::TokenVariant e)
{
    switch (e) {
        case CL_XMLToken::BEGIN:    return Val_long(0);
        case CL_XMLToken::END:      return Val_long(1);
        case CL_XMLToken::SINGLE:   return Val_long(2);
        default: caml_failwith("token_variant");
    }
    caml_failwith("token_variant");
}

CAMLextern_C value
caml_CL_XMLToken_get_variant(value token)
{
    return Val_TokenVariant(
        CL_XMLToken_val(token)->variant);
}

CAMLextern_C value
caml_CL_XMLToken_get_attributes(value token)
{
    CAMLparam1(token);
    CAMLlocal2(attrs, attr);

    std::vector<CL_XMLToken::Attribute> attributes =
        CL_XMLToken_val(token)->attributes;

    unsigned n = attributes.size();
    attrs = caml_alloc(n, 0);
    for (unsigned i = 0; i < n; i++)
    {
        CL_XMLToken::Attribute attribute = attributes.at(i);
        attr = caml_alloc(2, 0);
        Store_field(attr, 0, Val_CL_StringRef(attribute.first));
        Store_field(attr, 1, Val_CL_StringRef(attribute.second));
        Store_field(attrs, i, attr);
    }

    CAMLreturn(attrs);
}

// vim: sw=4 sts=4 ts=4 et

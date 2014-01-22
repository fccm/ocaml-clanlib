/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/XML/dom_node.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_DomNode_stub.hpp"

CAMLextern_C value
caml_CL_DomNode_init(value unit)
{
    CL_DomNode *node = new CL_DomNode();
    return Val_CL_DomNode(node);
}

CAMLextern_C value
caml_CL_DomNode_copy(value orig)
{
    CL_DomNode *node = new CL_DomNode(*CL_DomNode_val(orig));
    return Val_CL_DomNode(node);
}

CAMLextern_C value
caml_CL_DomNode_delete(value node)
{
    delete CL_DomNode_val(node);
    nullify_ptr(node);
    return Val_unit;
}

CAMLextern_C value
caml_CL_DomNode_get_first_child(value node)
{
    CL_DomNode child = CL_DomNode_val(node)->get_first_child();
    if (child.is_null()) caml_raise_not_found();
    CL_DomNode *ret = new CL_DomNode(child);
    return Val_CL_DomNode(ret);
}

CAMLextern_C value
caml_CL_DomNode_get_last_child(value node)
{
    CL_DomNode child = CL_DomNode_val(node)->get_last_child();
    if (child.is_null()) caml_raise_not_found();
    CL_DomNode *ret = new CL_DomNode(child);
    return Val_CL_DomNode(ret);
}

CAMLextern_C value
caml_CL_DomNode_get_previous_sibling(value node)
{
    CL_DomNode sibling = CL_DomNode_val(node)->get_previous_sibling();
    if (sibling.is_null()) caml_raise_not_found();
    CL_DomNode *ret = new CL_DomNode(sibling);
    return Val_CL_DomNode(ret);
}

CAMLextern_C value
caml_CL_DomNode_get_next_sibling(value node)
{
    CL_DomNode sibling = CL_DomNode_val(node)->get_next_sibling();
    if (sibling.is_null()) caml_raise_not_found();
    CL_DomNode *ret = new CL_DomNode(sibling);
    return Val_CL_DomNode(ret);
}

CAMLextern_C value
caml_CL_DomNode_get_parent_node(value node)
{
    CL_DomNode parent = CL_DomNode_val(node)->get_parent_node();
    if (parent.is_null()) caml_raise_not_found();
    CL_DomNode *ret = new CL_DomNode(parent);
    return Val_CL_DomNode(ret);
}

CAMLextern_C value
caml_CL_DomNode_get_node_name(value node)
{
    CL_DomString name = CL_DomNode_val(node)->get_node_name();
    return Val_CL_DomString(name);
}

CAMLextern_C value
caml_CL_DomNode_get_node_value(value node)
{
    CL_DomString val = CL_DomNode_val(node)->get_node_value();
    return Val_CL_DomString(val);
}

/*
bool is_supported(const CL_DomString &feature, const CL_DomString &version) const;
*/

#define caml_CL_DomNode_is_this(is_this) \
CAMLextern_C value \
caml_CL_DomNode_##is_this(value node) \
{ \
    bool b = CL_DomNode_val(node)->is_this(); \
    return Val_bool(b); \
}

#define quote(s) #s

#define ml_CL_DomNode_is_this(is_this) \
external is_this : qa t -> bool = quote(caml_CL_DomNode_##is_this)


caml_CL_DomNode_is_this( is_element )
caml_CL_DomNode_is_this( is_attr )
caml_CL_DomNode_is_this( is_text )
caml_CL_DomNode_is_this( is_cdata_section )
caml_CL_DomNode_is_this( is_entity_reference )
caml_CL_DomNode_is_this( is_entity )
caml_CL_DomNode_is_this( is_processing_instruction)
caml_CL_DomNode_is_this( is_comment )
caml_CL_DomNode_is_this( is_document )
caml_CL_DomNode_is_this( is_document_type )
caml_CL_DomNode_is_this( is_document_fragment )
caml_CL_DomNode_is_this( is_notation )
caml_CL_DomNode_is_this( has_attributes )
caml_CL_DomNode_is_this( has_child_nodes )

#if 0
ml_CL_DomNode_is_this( is_element )
ml_CL_DomNode_is_this( is_attr )
ml_CL_DomNode_is_this( is_text )
ml_CL_DomNode_is_this( is_cdata_section )
ml_CL_DomNode_is_this( is_entity_reference )
ml_CL_DomNode_is_this( is_entity )
ml_CL_DomNode_is_this( is_processing_instruction)
ml_CL_DomNode_is_this( is_comment )
ml_CL_DomNode_is_this( is_document )
ml_CL_DomNode_is_this( is_document_type )
ml_CL_DomNode_is_this( is_document_fragment )
ml_CL_DomNode_is_this( is_notation )
ml_CL_DomNode_is_this( has_attributes )
ml_CL_DomNode_is_this( has_child_nodes )
#endif


#include <ClanLib/Core/XML/dom_named_node_map.h>

CAMLextern_C value
caml_CL_DomNode_get_attributes(value node)
{
    CAMLparam1(node);
    CAMLlocal3(lst, cons, attr);

    CL_DomNamedNodeMap attributes =
        CL_DomNode_val(node)->get_attributes();

    lst = Val_emptylist;
    unsigned n = attributes.get_length();
    for (unsigned i = 0; i < n; ++i) {
        CL_DomNode attribute = attributes.item(i);

        CL_DomString name = attribute.get_local_name();
        CL_DomString cont = attribute.get_node_value();
        {
            attr = caml_alloc(2, 0);
            Store_field(attr, 0, Val_CL_DomString(name));
            Store_field(attr, 1, Val_CL_DomString(cont));
        }
        cons = caml_alloc(2, 0);
        Store_field(cons, 0, attr);
        Store_field(cons, 1, lst);
        lst = cons;
    }
    CAMLreturn(lst);
}

// vim: sw=4 sts=4 ts=4 et

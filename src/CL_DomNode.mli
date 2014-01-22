(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__DomNode.html}
  class CL_DomNode} *)

type 'a t

external init : unit -> 'a t = "caml_CL_DomNode_init"
external delete : 'a t -> unit = "caml_CL_DomNode_delete"
external copy : 'a t -> 'a t = "caml_CL_DomNode_copy"

external get_first_child : 'a t -> 'a t
  = "caml_CL_DomNode_get_first_child"
(** raises [Not_found] *)

external get_last_child : 'a t -> 'a t
  = "caml_CL_DomNode_get_last_child"
(** raises [Not_found] *)

external get_next_sibling : 'a t -> 'a t
  = "caml_CL_DomNode_get_next_sibling"
(** raises [Not_found] *)

external get_previous_sibling : 'a t -> 'a t
  = "caml_CL_DomNode_get_previous_sibling"
(** raises [Not_found] *)

external get_parent_node : 'a t -> 'a t
  = "caml_CL_DomNode_get_parent_node"
(** raises [Not_found] *)

external get_node_name : 'a t -> string
  = "caml_CL_DomNode_get_node_name"

external get_node_value : 'a t -> string
  = "caml_CL_DomNode_get_node_value"

external get_attributes : 'a t -> (string * string) list
  = "caml_CL_DomNode_get_attributes"

module Exceptionless : sig
  val get_first_child : 'a t -> 'a t option
  val get_last_child : 'a t -> 'a t option
  val get_next_sibling : 'a t -> 'a t option
  val get_previous_sibling : 'a t -> 'a t option
  val get_parent_node : 'a t -> 'a t option
end

external is_element : 'a t -> bool = "caml_CL_DomNode_is_element" "noalloc"
external is_attr : 'a t -> bool = "caml_CL_DomNode_is_attr" "noalloc"
external is_text : 'a t -> bool = "caml_CL_DomNode_is_text" "noalloc"
external is_cdata_section : 'a t -> bool = "caml_CL_DomNode_is_cdata_section" "noalloc"
external is_entity_reference : 'a t -> bool = "caml_CL_DomNode_is_entity_reference" "noalloc"
external is_entity : 'a t -> bool = "caml_CL_DomNode_is_entity" "noalloc"
external is_processing_instruction : 'a t -> bool = "caml_CL_DomNode_is_processing_instruction" "noalloc"
external is_comment : 'a t -> bool = "caml_CL_DomNode_is_comment" "noalloc"
external is_document : 'a t -> bool = "caml_CL_DomNode_is_document" "noalloc"
external is_document_type : 'a t -> bool = "caml_CL_DomNode_is_document_type" "noalloc"
external is_document_fragment : 'a t -> bool = "caml_CL_DomNode_is_document_fragment" "noalloc"
external is_notation : 'a t -> bool = "caml_CL_DomNode_is_notation" "noalloc"
external has_attributes : 'a t -> bool = "caml_CL_DomNode_has_attributes" "noalloc"
external has_child_nodes : 'a t -> bool = "caml_CL_DomNode_has_child_nodes" "noalloc"

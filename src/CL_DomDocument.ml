type document
type t = document CL_DomNode.t

external init : unit -> t = "caml_CL_DomDocument_init"
external delete : t -> unit = "caml_CL_DomDocument_delete"
external from_file : CL_File.t -> t = "caml_CL_DomDocument_init_from_file"

external get_document_element : t -> CL_DomElement.t
  = "caml_CL_DomDocument_get_document_element"

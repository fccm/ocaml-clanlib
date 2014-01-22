(* bindings for CL_XMLToken *)
type t

external init : unit -> t = "caml_CL_XMLToken_init"
external delete : t -> unit = "caml_CL_XMLToken_delete"

external get_name : t -> string = "caml_CL_XMLToken_get_name"
external get_value : t -> string = "caml_CL_XMLToken_get_value"

type token_type =
  | Null_token
  | Element
  | Text
  | CData_section
  | Entity_reference
  | Entity
  | Processing_instruction
  | Comment
  | Document_type
  | Notation

external get_type : t -> token_type = "caml_CL_XMLToken_get_type"

type token_variant =
  | Begin
  | End
  | Single

external get_variant : t -> token_variant = "caml_CL_XMLToken_get_variant"

type attribute = string * string

external get_attributes : t -> attribute array
  = "caml_CL_XMLToken_get_attributes"

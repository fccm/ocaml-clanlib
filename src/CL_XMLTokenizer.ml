(* bindings for CL_XMLTokenizer *)
type t

external init : unit -> t = "caml_CL_XMLTokenizer_init"
external delete : t -> unit = "caml_CL_XMLTokenizer_delete"

external from_file : file:CL_File.t -> t
  = "caml_CL_XMLTokenizer_init_from_file"

external set_eat_whitespace : t -> enable:bool -> unit
  = "caml_CL_XMLTokenizer_set_eat_whitespace"

external next : t -> CL_XMLToken.t
  = "caml_CL_XMLTokenizer_next"

module Exceptionless = struct
  let next tk =
    try Some (next tk)
    with Not_found -> None
end

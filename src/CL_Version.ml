module Compiled = struct

type t = int * int * int

external get_as_string : unit -> string
  = "caml_CL_Version_get_as_string"

external get_as_int : unit -> int
  = "caml_CL_Version_get_current_as_int"

external int_of_version : int * int * int -> int
  = "caml_CL_Version_get_this_as_int"

external compare : t -> int
  = "caml_CL_Version_compare"

external compare2 : t -> t -> int
  = "caml_CL_Version_compare2"

end

(* bindings for CL_DataBuffer *)
type t

external init : unit -> t
  = "caml_CL_DataBuffer_init"

external delete : t -> unit
  = "caml_CL_DataBuffer_delete"

external of_string : string -> t
  = "caml_CL_DataBuffer_of_string"

external copy : t -> t
  = "caml_CL_DataBuffer_copy"

external get_size : t -> int
  = "caml_CL_DataBuffer_get_size"

external get_capacity : t -> int
  = "caml_CL_DataBuffer_get_capacity"

external set_size : t -> int -> unit
  = "caml_CL_DataBuffer_set_size"

external set_capacity : t -> int -> unit
  = "caml_CL_DataBuffer_set_capacity"

external get : t -> int -> char
  = "caml_CL_DataBuffer_get_i"

external set : t -> int -> char -> unit
  = "caml_CL_DataBuffer_set_i"

(* bindings for CL_NetGameEventValue *)
type t

external init : unit -> t = "caml_CL_NetGameEventValue_init"
external delete : t -> unit = "caml_CL_NetGameEventValue_delete"

external of_int : int -> t = "caml_CL_NetGameEventValue_of_int"
external of_float : int -> t = "caml_CL_NetGameEventValue_of_float"
external of_string : int -> t = "caml_CL_NetGameEventValue_of_string"

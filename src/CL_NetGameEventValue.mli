(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__NetGameEventValue.html}
  class CL_NetGameEventValue} *)

type t

external init : unit -> t = "caml_CL_NetGameEventValue_init"
external delete : t -> unit = "caml_CL_NetGameEventValue_delete"

external of_int : int -> t = "caml_CL_NetGameEventValue_of_int"
external of_float : int -> t = "caml_CL_NetGameEventValue_of_float"
external of_string : int -> t = "caml_CL_NetGameEventValue_of_string"

(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Timer.html}
  class CL_Timer} *)

type t
type uint = int
external init : unit -> t = "caml_CL_Timer_init"
external delete : t -> unit = "caml_CL_Timer_delete"
external is_repeating : t -> bool = "caml_CL_Timer_is_repeating"
external get_timeout : t -> uint = "caml_CL_Timer_get_timeout"
external start : t -> timeout:uint -> repeat:bool -> unit = "caml_CL_Timer_start" "noalloc"
external stop : t -> unit = "caml_CL_Timer_stop" "noalloc"

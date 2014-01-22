(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__System.html}
  class CL_System} *)

type uint = int

external sleep : millis:int -> unit = "caml_CL_System_sleep" "noalloc"

external get_time : unit -> uint = "caml_CL_System_get_time" "noalloc"
external get_num_cores : unit -> int = "caml_CL_System_get_num_cores" "noalloc"
(*
external detect_mmx : unit -> bool = "caml_CL_System_detect_mmx" "noalloc"
external detect_3dnow : unit -> bool = "caml_CL_System_detect_3dnow" "noalloc"
external detect_ext_3dnow : unit -> bool = "caml_CL_System_detect_ext_3dnow" "noalloc"
*)

(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__KeepAlive.html}
  class CL_KeepAlive} *)

external process : ?timeout:int -> unit -> unit = "caml_CL_KeepAlive_process" [@@noalloc]

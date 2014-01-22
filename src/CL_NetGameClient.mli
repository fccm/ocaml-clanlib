(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__NetGameClient.html}
  class CL_NetGameClient} *)

type t

external init : unit -> t = "caml_CL_NetGameClient_init"
external delete : t -> unit = "caml_CL_NetGameClient_delete"

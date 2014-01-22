(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__NetGameServer.html}
  class CL_NetGameServer} *)

type t
external init : unit -> t = "caml_CL_NetGameServer_init"
external delete : t -> unit = "caml_CL_NetGameServer_delete"

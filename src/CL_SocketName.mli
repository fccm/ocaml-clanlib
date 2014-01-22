(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__SocketName.html}
  class CL_SocketName} *)

type t
external init : ?address:string -> ?port:string -> unit -> t
  = "caml_CL_SocketName_init"
external copy : sock_name:t -> t = "caml_CL_SocketName_copy"
external delete : sock_name:t -> unit = "caml_CL_SocketName_delete"

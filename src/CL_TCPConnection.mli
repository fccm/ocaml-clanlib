(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__TCPConnection.html}
  class CL_TCPConnection} *)

type tcp_connection
type t = tcp_connection CL_IODevice.t

external init : remote:CL_SocketName.t -> ?local:CL_SocketName.t -> unit -> t
  = "caml_CL_TCPConnection_init"
external delete : conn:t -> unit = "caml_CL_TCPConnection_delete"
external send :
  t -> data:string -> ?send_all:bool -> unit -> int
  = "caml_CL_TCPConnection_send"
external receive :
  t -> data:string -> ?receive_all:bool -> unit -> int
  = "caml_CL_TCPConnection_receive"
external disconnect_graceful : conn:t -> unit
  = "caml_CL_TCPConnection_disconnect_graceful"
external disconnect_abortive : conn:t -> unit
  = "caml_CL_TCPConnection_disconnect_abortive"
external set_nodelay : conn:t -> ?enable:bool -> unit -> unit
  = "caml_CL_TCPConnection_set_nodelay"
external get_local_name : unit -> CL_SocketName.t
  = "caml_CL_TCPConnection_get_local_name"
external get_remote_name : unit -> CL_SocketName.t
  = "caml_CL_TCPConnection_get_remote_name"

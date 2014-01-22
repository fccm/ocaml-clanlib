type t

external init :
  name:CL_SocketName.t -> queue_size:int -> force_bind:bool -> t
  = "caml_CL_TCPListen_init"

external delete : t -> unit = "caml_CL_TCPListen_delete"

external accept: t -> CL_TCPConnection.t
  = "caml_CL_TCPListen_accept"

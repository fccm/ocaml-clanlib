type t

external init :
  local_name:CL_SocketName.t ->
  force_bind:bool -> unit -> t
  = "caml_CL_UDPSocket_init"

external delete : unit -> t
  = "caml_CL_UDPSocket_delete"

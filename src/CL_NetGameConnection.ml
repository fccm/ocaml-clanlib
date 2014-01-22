(* bindings for CL_NetGameConnection *)
type t

external delete : t -> unit = "caml_CL_NetGameConnection_delete"

(* bindings for CL_NetGameClient *)
type t

external init : unit -> t = "caml_CL_NetGameClient_init"
external delete : t -> unit = "caml_CL_NetGameClient_delete"

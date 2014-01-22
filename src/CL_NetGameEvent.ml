(* bindings for CL_NetGameEvent *)
type t

external init0 : name:string -> t
  = "caml_CL_NetGameEvent_init0"

external init1 : name:string ->
  arg1:CL_NetGameEventValue.t -> t
  = "caml_CL_NetGameEvent_init1"

external init2 : name:string ->
  arg1:CL_NetGameEventValue.t ->
  arg2:CL_NetGameEventValue.t -> t
  = "caml_CL_NetGameEvent_init2"

external init3 : name:string ->
  arg1:CL_NetGameEventValue.t ->
  arg2:CL_NetGameEventValue.t ->
  arg3:CL_NetGameEventValue.t -> t
  = "caml_CL_NetGameEvent_init3"

external init4 : name:string ->
  arg1:CL_NetGameEventValue.t ->
  arg2:CL_NetGameEventValue.t ->
  arg3:CL_NetGameEventValue.t ->
  arg4:CL_NetGameEventValue.t -> t
  = "caml_CL_NetGameEvent_init4"

external init5 : name:string ->
  arg1:CL_NetGameEventValue.t ->
  arg2:CL_NetGameEventValue.t ->
  arg3:CL_NetGameEventValue.t ->
  arg4:CL_NetGameEventValue.t ->
  arg5:CL_NetGameEventValue.t -> t
  = "caml_CL_NetGameEvent_init5_bc"
    "caml_CL_NetGameEvent_init5"

external delete : t -> unit = "caml_CL_NetGameEvent_delete"

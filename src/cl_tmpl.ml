(* bindings for CL_Foo *)
type t

external init : unit -> t = "caml_CL_Foo_init"
external delete : t -> unit = "caml_CL_Foo_delete"

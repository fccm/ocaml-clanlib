(* bindings for CL_PrimitivesArray *)

type t = CL_Type.primitives_array

external init : unit -> t = "caml_CL_PrimitivesArray_init"
external init_with_gc : gc:CL_Type.graphic_context -> t
  = "caml_CL_PrimitivesArray_init_with_gc"

let init ?gc () =
  match gc with
  | None -> init ()
  | Some gc -> init_with_gc ~gc

external delete : t -> unit = "caml_CL_PrimitivesArray_delete"

external set_attribute : t -> index:int -> v:CL_Vec3f.t -> unit
  = "caml_CL_PrimitivesArray_set_attribute"

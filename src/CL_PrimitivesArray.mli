(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__PrimitivesArray.html}
  class CL_PrimitivesArray} *)

type t = CL_Type.primitives_array

val init : ?gc:CL_Type.graphic_context -> unit -> t

external delete : t -> unit
  = "caml_CL_PrimitivesArray_delete"

external set_attribute : t -> index:int -> v:CL_Vec3f.t -> unit
  = "caml_CL_PrimitivesArray_set_attribute"

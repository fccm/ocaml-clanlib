(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__RoundedRect.html}
  class CL_RoundedRect} *)

type t

external init : size:CL_Sizef.t -> rounding_in_pixels:float -> t
  = "caml_CL_RoundedRect_init"

external delete : t -> unit
  = "caml_CL_RoundedRect_delete"

external draw : t ->
  gc:CL_GraphicContext.t ->
  position:CL_Pointf.t ->
  color:CL_Colorf.t ->
  unit
  = "caml_CL_RoundedRect_draw"


external set_rounding : t -> offset:CL_Sizef.t -> unit
  = "caml_CL_RoundedRect_set_rounding"

external set_rounding_top_left : t -> offset:CL_Sizef.t -> unit
  = "caml_CL_RoundedRect_set_rounding_top_left"

external set_rounding_top_right : t -> offset:CL_Sizef.t -> unit
  = "caml_CL_RoundedRect_set_rounding_top_right"

external set_rounding_bottom_left : t -> offset:CL_Sizef.t -> unit
  = "caml_CL_RoundedRect_set_rounding_bottom_left"

external set_rounding_bottom_right : t -> offset:CL_Sizef.t -> unit
  = "caml_CL_RoundedRect_set_rounding_bottom_right"

external set_rounding_offsets : t ->
  offsets:CL_Sizef.t * CL_Sizef.t * CL_Sizef.t * CL_Sizef.t -> unit
  = "caml_CL_RoundedRect_set_rounding_offsets"
(** offsets are given in the order:
    (top_left, top_right, bottom_left, bottom_right)
*)

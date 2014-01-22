(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Palette.html}
  class CL_Palette} *)

type t

external init : colors:CL_Color.t array -> t
  = "caml_CL_Palette_init"

external delete : t -> unit = "caml_CL_Palette_delete"

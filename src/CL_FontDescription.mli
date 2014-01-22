(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__FontDescription.html}
  class CL_FontDescription} *)

type t
external init : unit -> t = "caml_CL_FontDescription_init"
external delete : t -> unit = "caml_CL_FontDescription_delete"
external set_typeface_name : t -> name:string -> unit
  = "caml_CL_FontDescription_set_typeface_name"
external set_height : t -> int -> unit = "caml_CL_FontDescription_set_height"
external set_average_width : t -> int -> unit
  = "caml_CL_FontDescription_set_average_width"
external set_escapement : t -> float -> unit
  = "caml_CL_FontDescription_set_escapement"
external set_orientation : t -> float -> unit
  = "caml_CL_FontDescription_set_orientation"
external set_weight : t -> int -> unit = "caml_CL_FontDescription_set_weight"
external set_italic : t -> unit = "caml_CL_FontDescription_set_italic"
external set_underline : t -> unit = "caml_CL_FontDescription_set_underline"
external set_strikeout : t -> unit = "caml_CL_FontDescription_set_strikeout"
external set_fixed_pitch : t -> unit
  = "caml_CL_FontDescription_set_fixed_pitch"
external set_anti_alias : t -> unit
  = "caml_CL_FontDescription_set_anti_alias"
external set_not_italic : t -> unit
  = "caml_CL_FontDescription_set_not_italic" "noalloc"
external set_not_underline : t -> unit
  = "caml_CL_FontDescription_set_not_underline" "noalloc"
external set_not_strikeout : t -> unit
  = "caml_CL_FontDescription_set_not_strikeout" "noalloc"
external set_not_fixed_pitch : t -> unit
  = "caml_CL_FontDescription_set_not_fixed_pitch" "noalloc"
external set_not_anti_alias : t -> unit
  = "caml_CL_FontDescription_set_not_anti_alias" "noalloc"

(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__BlendMode.html}
  class CL_BlendMode} *)

type t =
  | Zero
  | One
  | Dest_color
  | Src_color
  | One_minus_dest_color
  | One_minus_src_color
  | Src_alpha
  | One_minus_src_alpha
  | Dest_alpha
  | One_minus_dest_alpha
  | Src_alpha_saturate
  | Constant_color
  | One_minus_constant_color
  | Constant_alpha
  | One_minus_constant_alpha

val to_string : t -> string
val of_string : string -> t


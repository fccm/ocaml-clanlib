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

let to_string = function
  | Zero                      -> "blend_zero"
  | One                       -> "blend_one"
  | Dest_color                -> "blend_dest_color"
  | Src_color                 -> "blend_src_color"
  | One_minus_dest_color      -> "blend_one_minus_dest_color"
  | One_minus_src_color       -> "blend_one_minus_src_color"
  | Src_alpha                 -> "blend_src_alpha"
  | One_minus_src_alpha       -> "blend_one_minus_src_alpha"
  | Dest_alpha                -> "blend_dest_alpha"
  | One_minus_dest_alpha      -> "blend_one_minus_dest_alpha"
  | Src_alpha_saturate        -> "blend_src_alpha_saturate"
  | Constant_color            -> "blend_constant_color"
  | One_minus_constant_color  -> "blend_one_minus_constant_color"
  | Constant_alpha            -> "blend_constant_alpha"
  | One_minus_constant_alpha  -> "blend_one_minus_constant_alpha"

let of_string s =
  match String.lowercase_ascii s with
  | "blend_zero"                      -> Zero
  | "blend_one"                       -> One
  | "blend_dest_color"                -> Dest_color
  | "blend_src_color"                 -> Src_color
  | "blend_one_minus_dest_color"      -> One_minus_dest_color
  | "blend_one_minus_src_color"       -> One_minus_src_color
  | "blend_src_alpha"                 -> Src_alpha
  | "blend_one_minus_src_alpha"       -> One_minus_src_alpha
  | "blend_dest_alpha"                -> Dest_alpha
  | "blend_one_minus_dest_alpha"      -> One_minus_dest_alpha
  | "blend_src_alpha_saturate"        -> Src_alpha_saturate
  | "blend_constant_color"            -> Constant_color
  | "blend_one_minus_constant_color"  -> One_minus_constant_color
  | "blend_constant_alpha"            -> Constant_alpha
  | "blend_one_minus_constant_alpha"  -> One_minus_constant_alpha
  | _ -> invalid_arg "CL_BlendFunc.of_string"


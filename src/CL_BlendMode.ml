type t

external init : unit -> t = "caml_CL_BlendMode_init"
external delete : unit -> t = "caml_CL_BlendMode_delete"

external eq : t -> t -> bool = "caml_CL_BlendMode_eq"
external ( = ) : t -> t -> bool = "caml_CL_BlendMode_eq"

(* GENERATED *)

external get_blend_color : t -> CL_Colorf.t = "caml_CL_BlendMode_get_blend_color"
external get_blend_equation : t -> CL_BlendEquation.t = "caml_CL_BlendMode_get_blend_equation"
external get_blend_equation_alpha : t -> CL_BlendEquation.t = "caml_CL_BlendMode_get_blend_equation_alpha"
external get_blend_function_src : t -> CL_BlendFunc.t = "caml_CL_BlendMode_get_blend_function_src"
external get_blend_function_dest : t -> CL_BlendFunc.t = "caml_CL_BlendMode_get_blend_function_dest"
external get_blend_function_src_alpha : t -> CL_BlendFunc.t = "caml_CL_BlendMode_get_blend_function_src_alpha"
external get_blend_function_dest_alpha : t -> CL_BlendFunc.t = "caml_CL_BlendMode_get_blend_function_dest_alpha"
external is_blend_enabled : t -> bool = "caml_CL_BlendMode_is_blend_enabled"

external enable_blending : t -> bool -> unit = "caml_CL_BlendMode_enable_blending" "noalloc"
external set_blend_color : t -> CL_Colorf.t -> unit = "caml_CL_BlendMode_set_blend_color" "noalloc"

external set_blend_equation : t -> color:CL_BlendEquation.t -> alpha:CL_BlendEquation.t -> unit = "caml_CL_BlendMode_set_blend_equation" "noalloc"

external set_blend_function : t -> src:CL_BlendFunc.t -> dest:CL_BlendFunc.t -> src_alpha:CL_BlendFunc.t -> dest_alpha:CL_BlendFunc.t -> unit = "caml_CL_BlendMode_set_blend_function" "noalloc"

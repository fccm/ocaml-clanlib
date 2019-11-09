(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__GraphicContext.html}
  class CL_GraphicContext} *)

type t = CL_Type.graphic_context

external init : unit -> t = "caml_CL_GraphicContext_init"

external clear : t -> CL_Colorf.t -> unit = "caml_CL_GraphicContext_clear" [@@noalloc]

external get_width : t -> int = "caml_CL_GraphicContext_get_width" [@@noalloc]
external get_height : t -> int = "caml_CL_GraphicContext_get_height" [@@noalloc]
external get_size : t -> CL_Size.t = "caml_CL_GraphicContext_get_size"
external get_cliprect : t -> CL_Rect.t = "caml_CL_GraphicContext_get_cliprect"
external get_max_texture_size : t -> CL_Size.t = "caml_CL_GraphicContext_get_max_texture_size"

external reset_frame_buffer : t -> unit = "caml_CL_GraphicContext_reset_frame_buffer" [@@noalloc]
external reset_program_object : t -> unit = "caml_CL_GraphicContext_reset_program_object" [@@noalloc]
external reset_blend_mode : t -> unit = "caml_CL_GraphicContext_reset_blend_mode" [@@noalloc]
external reset_buffer_control : t -> unit = "caml_CL_GraphicContext_reset_buffer_control" [@@noalloc]
external reset_pen : t -> unit = "caml_CL_GraphicContext_reset_pen" [@@noalloc]
external reset_polygon_rasterizer : t -> unit = "caml_CL_GraphicContext_reset_polygon_rasterizer" [@@noalloc]
external push_cliprect : t -> unit = "caml_CL_GraphicContext_push_cliprect" [@@noalloc]
external pop_cliprect : t -> unit = "caml_CL_GraphicContext_pop_cliprect" [@@noalloc]
external reset_cliprect : t -> unit = "caml_CL_GraphicContext_reset_cliprect" [@@noalloc]
external push_modelview : t -> unit = "caml_CL_GraphicContext_push_modelview" [@@noalloc]
external pop_modelview : t -> unit = "caml_CL_GraphicContext_pop_modelview" [@@noalloc]
external flush_batcher : t -> unit = "caml_CL_GraphicContext_flush_batcher" [@@noalloc]

external set_scale2D : t -> x:float -> y:float -> unit = "caml_CL_GraphicContext_set_scale2D" [@@noalloc]
external set_scale3D : t -> x:float -> y:float -> z:float -> unit = "caml_CL_GraphicContext_set_scale3D" [@@noalloc]
external mult_scale2D : t -> x:float -> y:float -> unit = "caml_CL_GraphicContext_mult_scale2D" [@@noalloc]
external mult_scale3D : t -> x:float -> y:float -> z:float -> unit = "caml_CL_GraphicContext_mult_scale3D" [@@noalloc]
external push_scale2D : t -> x:float -> y:float -> unit = "caml_CL_GraphicContext_push_scale2D" [@@noalloc]
external push_scale3D : t -> x:float -> y:float -> z:float -> unit = "caml_CL_GraphicContext_push_scale3D" [@@noalloc]

external set_translate2D : t -> x:float -> y:float -> unit = "caml_CL_GraphicContext_set_translate2D" [@@noalloc]
external set_translate3D : t -> x:float -> y:float -> z:float -> unit = "caml_CL_GraphicContext_set_translate3D" [@@noalloc]
external mult_translate2D : t -> x:float -> y:float -> unit = "caml_CL_GraphicContext_mult_translate2D" [@@noalloc]
external mult_translate3D : t -> x:float -> y:float -> z:float -> unit = "caml_CL_GraphicContext_mult_translate3D" [@@noalloc]
external push_translate2D : t -> x:float -> y:float -> unit = "caml_CL_GraphicContext_push_translate2D" [@@noalloc]
external push_translate3D : t -> x:float -> y:float -> z:float -> unit = "caml_CL_GraphicContext_push_translate3D" [@@noalloc]


type primitives_type =
  | Points
  | Line_strip
  | Line_loop
  | Lines
  | Triangle_strip
  | Triangle_fan
  | Triangles

type standard_program =
  | Program_color_only
  | Program_single_texture
  | Program_sprite

type map_mode =
  | Map_2d_upper_left
  | Map_2d_lower_left
  | User_projection

external set_primitives_array : t -> CL_Type.primitives_array -> unit = "caml_CL_GraphicContext_set_primitives_array" [@@noalloc]

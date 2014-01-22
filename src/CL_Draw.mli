(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Draw.html}
  class CL_Draw} *)

external point :
  gc:CL_GraphicContext.t -> pos:CL_Pointf.t -> color:CL_Colorf.t -> unit
  = "caml_CL_Draw_point"
external box :
  gc:CL_GraphicContext.t ->
  pos1:CL_Pointf.t -> pos2:CL_Pointf.t -> color:CL_Colorf.t -> unit
  = "caml_CL_Draw_box"
external line :
  gc:CL_GraphicContext.t ->
  pos1:CL_Pointf.t -> pos2:CL_Pointf.t -> color:CL_Colorf.t -> unit
  = "caml_CL_Draw_line"
external fill :
  gc:CL_GraphicContext.t ->
  pos1:CL_Pointf.t -> pos2:CL_Pointf.t -> color:CL_Colorf.t -> unit
  = "caml_CL_Draw_fill"
external circle :
  gc:CL_GraphicContext.t ->
  center:CL_Pointf.t -> radius:float -> color:CL_Colorf.t -> unit
  = "caml_CL_Draw_circle"
external gradient_fill :
  gc:CL_GraphicContext.t ->
  pos1:CL_Pointf.t -> pos2:CL_Pointf.t -> gradient:CL_Gradient.t -> unit
  = "caml_CL_Draw_gradient_fill"
external gradient_circle :
  gc:CL_GraphicContext.t ->
  center:CL_Pointf.t ->
  ?centergradient:CL_Pointf.t ->
  radius:float -> gradient:CL_Gradient.t -> unit -> unit
  = "caml_CL_Draw_gradient_circle_bc"
    "caml_CL_Draw_gradient_circle"
external texture :
  gc:CL_GraphicContext.t ->
  texture:CL_Texture.t -> quad:CL_Quadf.t -> unit
  = "caml_CL_Draw_texture"
(** This is a convenience function.
    If using repeatedly, it is a lot faster to use [CL_PrimitivesArray] with
    gc.draw_primitives instead
*)

type t

external init : typeface:string -> height:int -> t
  = "caml_CL_Font_Vector_init"

external of_desc : desc:CL_FontDescription.t -> t
  = "caml_CL_Font_Vector_of_desc"

external delete : t -> unit = "caml_CL_Font_Vector_delete"

external draw_glyphs :
  font:t ->
  gc:CL_GraphicContext.t ->
  text:string ->
  pos:float * float ->
  length:int ->
  filled:bool ->
  color:CL_Colorf.t -> unit
  = "caml_CL_Font_Vector_draw_glyphs_bc"
    "caml_CL_Font_Vector_draw_glyphs"

external get_text_size :
  font:t -> gc:CL_GraphicContext.t -> text:string -> CL_Sizef.t
  = "caml_CL_Font_Vector_get_text_size"

external draw_text :
  font:t -> gc:CL_GraphicContext.t ->
  pos:float * float -> text:string -> ?color:CL_Colorf.t -> unit -> unit
  = "caml_CL_Font_Vector_draw_text_bc"
    "caml_CL_Font_Vector_draw_text"

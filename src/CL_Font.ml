type t

external init :
  gc:CL_GraphicContext.t ->
  typeface:string ->
  height:int -> t
  = "caml_CL_Font_init"

external of_desc : gc:CL_GraphicContext.t -> desc:CL_FontDescription.t -> t
  = "caml_CL_Font_of_desc"

external delete : t -> unit = "caml_CL_Font_delete"

external get_text_size :
  font:t -> gc:CL_GraphicContext.t -> text:string -> CL_Sizef.t
  = "caml_CL_Font_get_text_size"

external draw_text :
  font:t -> gc:CL_GraphicContext.t ->
  pos:float * float ->
  text:string ->
  ?color:CL_Colorf.t ->
  unit -> unit
  = "caml_CL_Font_draw_text_bc"
    "caml_CL_Font_draw_text"

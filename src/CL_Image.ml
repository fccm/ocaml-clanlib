type t

external of_texture :
  gc:CL_GraphicContext.t ->
  texture:CL_Texture.t ->
  rect:CL_Rect.t -> t
  = "caml_CL_Image_of_texture"

external of_file :
  gc:CL_GraphicContext.t ->
  filename:string -> t
  = "caml_CL_Image_of_file"

external of_pixelBuffer :
  gc:CL_GraphicContext.t ->
  pixelbuffer:CL_PixelBuffer.t ->
  rect:CL_Rect.t -> t
  = "caml_CL_Image_of_pixelBuffer"

external delete : t -> unit = "caml_CL_Image_delete"

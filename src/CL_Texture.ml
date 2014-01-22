type t

external init : gc:CL_GraphicContext.t -> width:int -> height:int -> t
  = "caml_CL_Texture_init"

external read_file : gc:CL_GraphicContext.t -> fullname:string -> t
  = "caml_CL_Texture_read_file"

external of_file : gc:CL_GraphicContext.t -> file:CL_File.t -> image_type:string -> t
  = "caml_CL_Texture_of_file"

external delete : t -> unit = "caml_CL_Texture_delete"

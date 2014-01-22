type t

(* clan-21 (not clan-23)
external of_data :
  width:int -> height:int -> pitch:int ->
  fmt:CL_PixelFormat.t ->
  ?palette:CL_Palette.t ->
  ?data:('a, 'b, Bigarray.c_layout) Bigarray.Array3.t ->
  unit -> t
  = "caml_CL_PixelBuffer_of_data_bc"
    "caml_CL_PixelBuffer_of_data"
*)

external of_filename :
  filename:string ->
  ?dir:CL_VirtualDirectory.t -> unit -> t
  = "caml_CL_PixelBuffer_of_filename"

external of_file :
  file:'a CL_IODevice.t -> image_type:string -> t
  = "caml_CL_PixelBuffer_of_file"

external delete : t -> unit = "caml_CL_PixelBuffer_delete"

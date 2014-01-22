type t
type uint = int
type kind =
  | RGBA
  | Index

external default : unit -> t = "caml_CL_PixelFormat_default"

external init :
  depth:int -> red_mask:uint -> green_mask:uint ->
  blue_mask:uint -> alpha_mask:uint -> use_colorkey:bool ->
  colorkey:uint -> kind:kind -> unit -> t
  = "caml_CL_PixelFormat_init_bc"
    "caml_CL_PixelFormat_init"

external delete : t -> unit = "caml_CL_PixelFormat_delete"

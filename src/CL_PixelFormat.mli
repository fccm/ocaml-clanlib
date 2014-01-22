(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__PixelFormat.html}
  class CL_PixelFormat} *)

type t
type kind = RGBA | Index
type uint = int
external default : unit -> t = "caml_CL_PixelFormat_default"
external delete : t -> unit = "caml_CL_PixelFormat_delete"
external init :
  depth:int -> red_mask:uint -> green_mask:uint ->
  blue_mask:uint -> alpha_mask:uint -> use_colorkey:bool ->
  colorkey:uint -> kind:kind -> unit -> t
  = "caml_CL_PixelFormat_init_bc"
    "caml_CL_PixelFormat_init"

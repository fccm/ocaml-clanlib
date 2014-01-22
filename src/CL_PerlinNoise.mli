(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__PerlinNoise.html}
  class CL_PerlinNoise} *)

type t

external init : unit -> t = "caml_CL_PerlinNoise_init"
external delete : t -> unit = "caml_CL_PerlinNoise_delete"

external create_noise2d :
  t -> start_x:float -> end_x:float ->
  start_y:float -> end_y:float -> CL_PixelBuffer.t
  = "caml_CL_PerlinNoise_create_noise2d"

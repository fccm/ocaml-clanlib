(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__DisplayWindow.html}
  class CL_DisplayWindow} *)

type t
external init : title:string -> width:int -> height:int -> t
  = "caml_CL_DisplayWindow_init"
external of_desc :
  desc:CL_DisplayWindowDescription.t ->
  ?target:CL_DisplayTarget.t -> unit -> t
  = "caml_CL_DisplayWindow_of_desc"
external delete : t -> unit
  = "caml_CL_DisplayWindow_delete"
external flip : t -> unit
  = "caml_CL_DisplayWindow_flip"
external flipi : t -> interval:int -> unit
  = "caml_CL_DisplayWindow_flipi"
external get_gc : t -> CL_GraphicContext.t
  = "caml_CL_DisplayWindow_get_gc"
external get_ic : t -> CL_InputContext.t
  = "caml_CL_DisplayWindow_get_ic"

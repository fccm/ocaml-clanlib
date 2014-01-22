type t

external init : colors:CL_Color.t array -> t
  = "caml_CL_Palette_init"

external delete : t -> unit = "caml_CL_Palette_delete"

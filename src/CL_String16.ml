type t
external init : string -> t = "caml_CL_String16_init"
external delete : t -> unit = "caml_CL_String16_delete"
external clear : t -> unit = "caml_CL_String16_clear"
external append : t -> string -> unit = "caml_CL_String16_append"

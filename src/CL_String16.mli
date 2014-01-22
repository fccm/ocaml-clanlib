(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__String16.html}
  class CL_String16} *)

type t
external init : string -> t = "caml_CL_String16_init"
external delete : t -> unit = "caml_CL_String16_delete"
external clear : t -> unit = "caml_CL_String16_clear"
external append : t -> string -> unit = "caml_CL_String16_append"

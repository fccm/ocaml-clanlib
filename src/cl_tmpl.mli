(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Foo.html}
  class CL_Foo} *)

type t

external init : unit -> t = "caml_CL_Foo_init"
external delete : t -> unit = "caml_CL_Foo_delete"

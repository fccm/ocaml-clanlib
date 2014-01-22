(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__BlendMode.html}
  class CL_BlendMode} *)

type t =
  | Add
  | Subtract
  | Reverse_subtract
  | Min
  | Max

val to_string : t -> string
val of_string : string -> t


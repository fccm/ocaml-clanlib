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

let to_string = function
  | Add               -> "add"
  | Subtract          -> "subtract"
  | Reverse_subtract  -> "reverse_subtract"
  | Min               -> "min"
  | Max               -> "max"

let of_string s =
  match String.lowercase s with
  | "add"               -> Add
  | "subtract"          -> Subtract
  | "reverse_subtract"  -> Reverse_subtract
  | "min"               -> Min
  | "max"               -> Max
  | _ -> invalid_arg "CL_BlendEquation.of_string"


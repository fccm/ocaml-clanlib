(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Quadd.html}
  class CL_Quadd} *)
(* links to CL_Quadd because ocaml's floats are doubles *)

type vec2f = float * float

type t = {
  p : vec2f;
  q : vec2f;
  r : vec2f;
  s : vec2f;
}

(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Gradient.html}
  class CL_Gradient} *)

type t = {
  first_color: CL_Colorf.t;
  second_color: CL_Colorf.t;
}

val init : first_color:CL_Colorf.t -> second_color:CL_Colorf.t -> t

val fst : t -> CL_Colorf.t
val snd : t -> CL_Colorf.t

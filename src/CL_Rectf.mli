(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Rectd.html}
  class CL_Rectd} *)

type t = { left : float; top : float; right : float; bottom : float; }
val init : left:float -> top:float -> right:float -> bottom:float -> t
val of_size : width:float -> height:float -> t
val texture_unit1_coords : t

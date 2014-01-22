(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Rect.html}
  class CL_Rect} *)

type t = { left : int; top : int; right : int; bottom : int; }
val init : left:int -> top:int -> right:int -> bottom:int -> t
val of_size : width:int -> height:int -> t

type t

type angle_unit = Degrees | Radians

external init : v:float -> u:angle_unit -> t
  = "caml_CL_Angle_init"

external delete : t -> unit
  = "caml_CL_Angle_delete"

external to_degrees : t -> float = "caml_CL_Angle_to_degrees"
external to_radians : t -> float = "caml_CL_Angle_to_radians"

external set_degrees : t -> degrees:float -> unit = "caml_CL_Angle_set_degrees"
external set_radians : t -> radians:float -> unit = "caml_CL_Angle_set_radians"
external normalize : t -> unit = "normalize"
external normalize_180 : t -> unit = "normalize_180"

external add : t -> t -> t = "caml_CL_Angle_add"
external sub : t -> t -> t = "caml_CL_Angle_sub"
external mul : t -> float -> t = "caml_CL_Angle_mul"
external div : t -> float -> t = "caml_CL_Angle_div"

external eq : t -> t -> bool = "caml_CL_Angle_eq"
external gt : t -> t -> bool = "caml_CL_Angle_gt"
external lt : t -> t -> bool = "caml_CL_Angle_lt"

module Infix = struct
  external ( + ) : t -> t -> t = "caml_CL_Angle_add"
  external ( - ) : t -> t -> t = "caml_CL_Angle_sub"
  external ( * ) : t -> float -> t = "caml_CL_Angle_mul"
  external ( / ) : t -> float -> t = "caml_CL_Angle_div"

  external ( = ) : t -> t -> bool = "caml_CL_Angle_eq"
  external ( > ) : t -> t -> bool = "caml_CL_Angle_gt"
  external ( < ) : t -> t -> bool = "caml_CL_Angle_lt"
end

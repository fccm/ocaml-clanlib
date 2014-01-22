type t

external init : float * float * float -> t
  = "caml_CL_Vec3f_init"

external init3 : x:float -> y:float -> z:float -> t
  = "caml_CL_Vec3f_init3"

external delete : t -> unit = "caml_CL_Vec3f_delete"
external print : t -> unit = "caml_CL_Vec3f_print"

external to_triplet : t -> float * float * float
  = "caml_CL_Vec3f_to_triplet"

external normalize : t -> t = "caml_CL_Vec3f_normalize"
external dot : t -> t -> float = "caml_CL_Vec3f_dot"
external cross : t -> t -> t = "caml_CL_Vec3f_cross"
external length : t -> float = "caml_CL_Vec3f_length"
external distance : t -> t -> float = "caml_CL_Vec3f_distance"

module Infix = struct
  external ( + ) : t -> t -> t = "caml_CL_Vec3f_add"
  external ( - ) : t -> t -> t = "caml_CL_Vec3f_sub"
  external ( * ) : t -> float -> t = "caml_CL_Vec3f_mul"
  external ( / ) : t -> float -> t = "caml_CL_Vec3f_div"
end

type t

type m = {
  m_0: float;
  m_1: float;
  m_2: float;
  m_3: float;
  m_4: float;
  m_5: float;
  m_6: float;
  m_7: float;
  m_8: float;
  m_9: float;
  m_10: float;
  m_11: float;
  m_12: float;
  m_13: float;
  m_14: float;
  m_15: float;
}

external init : m -> t = "caml_CL_Mat4f_init"

external of_array : float array -> t = "caml_CL_Mat4f_of_array"

external identity : unit -> t = "caml_CL_Mat4f_identity"

external delete : t -> unit = "caml_CL_Mat4f_delete"

external print: t -> unit = "caml_CL_Mat4f_print"

external frustum :
  left:float ->
  right:float ->
  bottom:float ->
  top:float ->
  z_near:float ->
  z_far:float -> t
  = "caml_CL_Mat4f_frustum_bc"
    "caml_CL_Mat4f_frustum"

external perspective : 
  fov:float ->
  aspect:float ->
  z_near:float ->
  z_far:float -> t
  = "caml_CL_Mat4f_perspective"

external ortho :
  left:float ->
  right:float ->
  bottom:float ->
  top:float ->
  z_near:float ->
  z_far:float -> t
  = "caml_CL_Mat4f_ortho_bc"
    "caml_CL_Mat4f_ortho"

external ortho_2d :
  left:float ->
  right:float ->
  bottom:float ->
  top:float -> t
  = "caml_CL_Mat4f_ortho_2d"

external look_at :
  eye_x:float -> eye_y:float -> eye_z:float ->
  center_x:float -> center_y:float -> center_z:float ->
  up_x:float -> up_y:float -> up_z:float -> t
  = "caml_CL_Mat4f_look_at_bc"
    "caml_CL_Mat4f_look_at"

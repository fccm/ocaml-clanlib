(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__InputDevice.html}
  class CL_InputDevice} *)

type t

type kind =
  | Keyboard
  | Pointer
  | Joystick
  | Tablet
  | Unknown

external get_keycode : t -> key:CL_Key.keycode -> bool = "caml_CL_InputDevice_get_keycode"
external get_position : t -> CL_Point.t = "caml_CL_InputDevice_get_position"
external get_name : t -> string = "caml_CL_InputDevice_get_name"
external get_device_name : t -> string = "caml_CL_InputDevice_get_device_name"

external get_axis_count : t -> int = "caml_CL_InputDevice_get_axis_count"
external get_button_count : t -> int = "caml_CL_InputDevice_get_button_count"
external in_proximity : t -> bool = "caml_CL_InputDevice_in_proximity"
external get_axis : t -> index:int -> float = "caml_CL_InputDevice_get_axis"

external delete : t -> unit = "caml_CL_InputDevice_delete"

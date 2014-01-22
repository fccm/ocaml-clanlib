(**  *)

type device_number = int

(** {3 connect} *)

external connect_sig_key_down :
  CL_InputDevice.t -> dev_num:device_number -> unit
  = "caml_CL_InputDevice_sig_key_down_connect"
external connect_sig_key_up :
  CL_InputDevice.t -> dev_num:device_number -> unit
  = "caml_CL_InputDevice_sig_key_up_connect"
external connect_sig_pointer_move :
  CL_InputDevice.t -> dev_num:device_number -> unit
  = "caml_CL_InputDevice_sig_pointer_move_connect"
external connect_sig_axis_move :
  CL_InputDevice.t -> dev_num:device_number -> unit
  = "caml_CL_InputDevice_sig_axis_move_connect"

(** {3 disconnect} *)

external disconnect_sig_key_down : CL_InputDevice.t -> unit
  = "caml_CL_InputDevice_sig_key_down_disconnect"
external disconnect_sig_key_up : CL_InputDevice.t -> unit
  = "caml_CL_InputDevice_sig_key_up_disconnect"
external disconnect_sig_pointer_move : CL_InputDevice.t -> unit
  = "caml_CL_InputDevice_sig_pointer_move_disconnect"
external disconnect_sig_axis_move : CL_InputDevice.t -> unit
  = "caml_CL_InputDevice_sig_axis_move_disconnect"

(** {3 get events} *)

type event =
  CL_InputEvent.t * device_number * CL_InputDevice.kind

val get_input_events : unit -> event list


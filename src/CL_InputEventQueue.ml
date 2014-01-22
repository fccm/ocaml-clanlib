type device_number = int

(* connect *)

external connect_sig_key_down : CL_InputDevice.t ->
  dev_num:device_number -> unit
  = "caml_CL_InputDevice_sig_key_down_connect"

external connect_sig_key_up : CL_InputDevice.t ->
  dev_num:device_number -> unit
  = "caml_CL_InputDevice_sig_key_up_connect"

external connect_sig_pointer_move : CL_InputDevice.t ->
  dev_num:device_number -> unit
  = "caml_CL_InputDevice_sig_pointer_move_connect"

external connect_sig_axis_move : CL_InputDevice.t ->
  dev_num:device_number -> unit
  = "caml_CL_InputDevice_sig_axis_move_connect"


(* get events *)

type event =
  CL_InputEvent.t * device_number * CL_InputDevice.kind

external get_input_events : unit -> event list
  = "caml_get_InputEvent_list"

let get_input_events () =
  List.rev (get_input_events ())

(* disconnect *)

external disconnect_sig_key_down : CL_InputDevice.t -> unit
  = "caml_CL_InputDevice_sig_key_down_disconnect"

external disconnect_sig_key_up : CL_InputDevice.t -> unit
  = "caml_CL_InputDevice_sig_key_up_disconnect"

external disconnect_sig_pointer_move : CL_InputDevice.t -> unit
  = "caml_CL_InputDevice_sig_pointer_move_disconnect"

external disconnect_sig_axis_move : CL_InputDevice.t -> unit
  = "caml_CL_InputDevice_sig_axis_move_disconnect"


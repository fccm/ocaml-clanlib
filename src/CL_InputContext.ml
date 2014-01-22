type t

external get_keyboard_count : ic:t -> int = "caml_CL_InputContext_get_keyboard_count" "noalloc"
external get_mouse_count : ic:t -> int = "caml_CL_InputContext_get_mouse_count" "noalloc"
external get_joystick_count : ic:t -> int = "caml_CL_InputContext_get_joystick_count" "noalloc"
external get_tablet_count : ic:t -> int = "caml_CL_InputContext_get_tablet_count" "noalloc"

external get_keyboard :
  ic:t ->
  ?keyboard:int ->
  unit ->
  CL_InputDevice.t
  = "caml_CL_InputContext_get_keyboard"

external get_mouse :
  ic:t ->
  ?mouse:int ->
  unit ->
  CL_InputDevice.t
  = "caml_CL_InputContext_get_mouse"

external get_joystick :
  ic:t ->
  ?joystick:int ->
  unit ->
  CL_InputDevice.t
  = "caml_CL_InputContext_get_joystick"

external get_tablet :
  ic:t ->
  ?tablet:int ->
  unit ->
  CL_InputDevice.t
  = "caml_CL_InputContext_get_tablet"

external get_device :
  ic:t ->
  device_name:string ->
  CL_InputDevice.t
  = "caml_CL_InputContext_get_device"


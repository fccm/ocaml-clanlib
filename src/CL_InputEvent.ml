type t

type kind =
  | No_key
  | Pressed
  | Released
  | Doubleclick
  | Pointer_moved
  | Axis_moved
  (*
  | Ball_moved
  *)
  | Proximity_change

external init : unit -> t = "caml_CL_InputEvent_init"
external delete : t -> unit = "caml_CL_InputEvent_delete"

external id : t -> int = "caml_CL_InputEvent_id"
external str : t -> string = "caml_CL_InputEvent_str"

external get_key : t -> CL_Key.keycode = "caml_CL_InputEvent_get_key"
external get_mouse : t -> CL_Mouse.t = "caml_CL_InputEvent_get_mouse"
external get_type : t -> kind = "caml_CL_InputEvent_get_type"

external mouse_pos : t -> CL_Point.t = "caml_CL_InputEvent_mouse_pos"
external axis_pos : t -> float = "caml_CL_InputEvent_axis_pos"
external repeat_count : t -> int = "caml_CL_InputEvent_repeat_count"
external alt : t -> bool = "caml_CL_InputEvent_alt"
external shift : t -> bool = "caml_CL_InputEvent_shift"
external ctrl : t -> bool = "caml_CL_InputEvent_ctrl"

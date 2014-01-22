(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__DisplayWindowDescription.html}
  class CL_DisplayWindowDescription} *)

type t

external init :
  ?title:string ->
  ?position:CL_Rect.t ->
  ?client_area:bool ->
  unit -> t
  = "caml_CL_DisplayWindowDescription_init"

external delete : t -> unit
  = "caml_CL_DisplayWindowDescription_delete"

external copy : t -> t
  = "caml_CL_DisplayWindowDescription_copy"

(*
external get_owner : t -> CL_DisplayWindow.t
  = "caml_CL_DisplayWindowDescription_get_owner"
external set_owner_window : t -> owner:CL_DisplayWindow.t -> unit
  = "caml_CL_DisplayWindowDescription_set_owner_window" "noalloc"
*)


(* Generated code: *)

external get_title : t -> string = "caml_CL_DisplayWindowDescription_get_title"
external get_decorations : t -> bool = "caml_CL_DisplayWindowDescription_get_decorations"
external get_size : t -> CL_Size.t = "caml_CL_DisplayWindowDescription_get_size"
external get_position : t -> CL_Rect.t = "caml_CL_DisplayWindowDescription_get_position"
external get_position_client_area : t -> bool = "caml_CL_DisplayWindowDescription_get_position_client_area"
external is_fullscreen : t -> bool = "caml_CL_DisplayWindowDescription_is_fullscreen"
external get_flipping_buffers : t -> int = "caml_CL_DisplayWindowDescription_get_flipping_buffers"
external get_allow_resize : t -> bool = "caml_CL_DisplayWindowDescription_get_allow_resize"
external get_bpp : t -> int = "caml_CL_DisplayWindowDescription_get_bpp"
external get_refresh_rate : t -> int = "caml_CL_DisplayWindowDescription_get_refresh_rate"
external is_layered : t -> bool = "caml_CL_DisplayWindowDescription_is_layered"
external has_caption : t -> bool = "caml_CL_DisplayWindowDescription_has_caption"
external has_sysmenu : t -> bool = "caml_CL_DisplayWindowDescription_has_sysmenu"
external has_minimize_button : t -> bool = "caml_CL_DisplayWindowDescription_has_minimize_button"
external has_maximize_button : t -> bool = "caml_CL_DisplayWindowDescription_has_maximize_button"
external has_border : t -> bool = "caml_CL_DisplayWindowDescription_has_border"
external is_tool_window : t -> bool = "caml_CL_DisplayWindowDescription_is_tool_window"
external is_visible : t -> bool = "caml_CL_DisplayWindowDescription_is_visible"
external is_topmost : t -> bool = "caml_CL_DisplayWindowDescription_is_topmost"
external get_using_gui_window_cache : t -> bool = "caml_CL_DisplayWindowDescription_get_using_gui_window_cache"
external has_drop_shadow : t -> bool = "caml_CL_DisplayWindowDescription_has_drop_shadow"
external get_tablet_context : t -> bool = "caml_CL_DisplayWindowDescription_get_tablet_context"
external get_depth_size : t -> int = "caml_CL_DisplayWindowDescription_get_depth_size"
external get_stencil_size : t -> int = "caml_CL_DisplayWindowDescription_get_stencil_size"


external set_fullscreen : t -> unit = "caml_CL_DisplayWindowDescription_set_fullscreen" "noalloc"
external show_caption : t -> unit = "caml_CL_DisplayWindowDescription_show_caption" "noalloc"
external show_sysmenu : t -> unit = "caml_CL_DisplayWindowDescription_show_sysmenu" "noalloc"
external show_minimize_button : t -> unit = "caml_CL_DisplayWindowDescription_show_minimize_button" "noalloc"
external show_maximize_button : t -> unit = "caml_CL_DisplayWindowDescription_show_maximize_button" "noalloc"
external show_border : t -> unit = "caml_CL_DisplayWindowDescription_show_border" "noalloc"
external set_visible : t -> unit = "caml_CL_DisplayWindowDescription_set_visible" "noalloc"
external set_topmost : t -> unit = "caml_CL_DisplayWindowDescription_set_topmost" "noalloc"
external set_tool_window : t -> unit = "caml_CL_DisplayWindowDescription_set_tool_window" "noalloc"
external set_drop_shadow : t -> unit = "caml_CL_DisplayWindowDescription_set_drop_shadow" "noalloc"


external unset_fullscreen : t -> unit = "caml_CL_DisplayWindowDescription_unset_fullscreen" "noalloc"
external hide_caption : t -> unit = "caml_CL_DisplayWindowDescription_hide_caption" "noalloc"
external hide_sysmenu : t -> unit = "caml_CL_DisplayWindowDescription_hide_sysmenu" "noalloc"
external hide_minimize_button : t -> unit = "caml_CL_DisplayWindowDescription_hide_minimize_button" "noalloc"
external hide_maximize_button : t -> unit = "caml_CL_DisplayWindowDescription_hide_maximize_button" "noalloc"
external hide_border : t -> unit = "caml_CL_DisplayWindowDescription_hide_border" "noalloc"
external set_not_visible : t -> unit = "caml_CL_DisplayWindowDescription_set_not_visible" "noalloc"
external set_not_topmost : t -> unit = "caml_CL_DisplayWindowDescription_set_not_topmost" "noalloc"
external set_not_tool_window : t -> unit = "caml_CL_DisplayWindowDescription_set_not_tool_window" "noalloc"
external set_not_drop_shadow : t -> unit = "caml_CL_DisplayWindowDescription_set_not_drop_shadow" "noalloc"


external set_decorations : t -> bool -> unit
  = "caml_CL_DisplayWindowDescription_set_decorations" "noalloc"
external set_title : t -> title:string -> unit
  = "caml_CL_DisplayWindowDescription_set_title" "noalloc"
external set_flipping_buffers : t -> num_buffers:int -> unit
  = "caml_CL_DisplayWindowDescription_set_flipping_buffers" "noalloc"
external set_allow_resize : t -> allow_resize:bool -> unit
  = "caml_CL_DisplayWindowDescription_set_allow_resize" "noalloc"
external set_bpp : t -> bpp:int -> unit
  = "caml_CL_DisplayWindowDescription_set_bpp" "noalloc"
external set_refresh_rate : t -> refresh_rate:int -> unit
  = "caml_CL_DisplayWindowDescription_set_refresh_rate" "noalloc"
external set_tablet_context : t -> create:bool -> unit
  = "caml_CL_DisplayWindowDescription_set_tablet_context" "noalloc"
external set_using_gui_window_cache : t -> bool -> unit
  = "caml_CL_DisplayWindowDescription_set_using_gui_window_cache" "noalloc"
external set_layered : t -> bool -> unit
  = "caml_CL_DisplayWindowDescription_set_layered" "noalloc"
external set_depth_size : t -> int -> unit
  = "caml_CL_DisplayWindowDescription_set_depth_size" "noalloc"
external set_stencil_size : t -> int -> unit
  = "caml_CL_DisplayWindowDescription_set_stencil_size" "noalloc"

external set_size : t -> size:CL_Size.t -> client_area:bool -> unit
  = "caml_CL_DisplayWindowDescription_set_size" "noalloc"
external set_position : t -> position:CL_Rect.t -> client_area:bool -> unit
  = "caml_CL_DisplayWindowDescription_set_position" "noalloc"

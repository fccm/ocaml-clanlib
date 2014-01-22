(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Sprite.html}
  class CL_Sprite} *)

type t

(**/**)

external init_with_gc_and_fullname :
  gc:CL_GraphicContext.t -> fullname:string -> t
  = "caml_CL_Sprite_init_with_gc_and_fullname"

external init_with_gc_filename_vdir :
  gc:CL_GraphicContext.t ->
  filename:string ->
  dir:CL_VirtualDirectory.t -> t
  = "caml_CL_Sprite_init_with_gc_filename_vdir"

external init_with_gc_and_io :
  gc:CL_GraphicContext.t ->
  file:'a CL_IODevice.t ->
  image_type:string -> t
  = "caml_CL_Sprite_init_with_gc_and_io"

(**/**)

type file_dir_src = {
  filename: string;
  dir: CL_VirtualDirectory.t;
}

type 'a io_src = {
  image_in: 'a CL_IODevice.t;
  image_type: string;
}

type 'a sprite_src = [
  | `Fullname of string
  | `File_dir_src of file_dir_src
  | `IO of 'a io_src
  ]

val init_with :
  gc:CL_GraphicContext.t ->
  src:'a sprite_src -> t


external init : unit -> t = "caml_CL_Sprite_init"
external delete : t -> unit = "caml_CL_Sprite_delete"



external set_angle : t -> angle:CL_Angle.t -> unit = "caml_CL_Sprite_set_angle" "noalloc"
external set_angle_pitch : t -> angle:CL_Angle.t -> unit = "caml_CL_Sprite_set_angle_pitch" "noalloc"
external set_angle_yaw : t -> angle:CL_Angle.t -> unit = "caml_CL_Sprite_set_angle_yaw" "noalloc"
external rotate : t -> angle:CL_Angle.t -> unit = "caml_CL_Sprite_rotate" "noalloc"
external rotate_pitch : t -> angle:CL_Angle.t -> unit = "caml_CL_Sprite_rotate_pitch" "noalloc"
external rotate_yaw : t -> angle:CL_Angle.t -> unit = "caml_CL_Sprite_rotate_yaw" "noalloc"
external set_base_angle : t -> angle:CL_Angle.t -> unit = "caml_CL_Sprite_set_base_angle" "noalloc"
external set_scale : t -> x:float -> y:float -> unit = "caml_CL_Sprite_set_scale" "noalloc"
external set_alpha : t -> alpha:float -> unit = "caml_CL_Sprite_set_alpha" "noalloc"
external set_frame : t -> frame:CL_Type.uint -> unit = "caml_CL_Sprite_set_frame" "noalloc"
external set_delay : t -> delay_ms:int -> unit = "caml_CL_Sprite_set_delay" "noalloc"
external set_frame_delay : t -> frame:int -> delay_ms:int -> unit = "caml_CL_Sprite_set_frame_delay" "noalloc"
external set_frame_offset : t -> frame:int -> offset:CL_Point.t -> unit = "caml_CL_Sprite_set_frame_offset" "noalloc"
external set_id : t -> id:int -> unit = "caml_CL_Sprite_set_id" "noalloc"
external finish : t -> unit = "caml_CL_Sprite_finish" "noalloc"
external restart : t -> unit = "caml_CL_Sprite_restart" "noalloc"

external set_play_loop : t -> unit = "caml_CL_Sprite_set_play_loop" "noalloc"
external set_play_pingpong : t -> unit = "caml_CL_Sprite_set_play_pingpong" "noalloc"
external set_play_backward : t -> unit = "caml_CL_Sprite_set_play_backward" "noalloc"
external unset_play_loop : t -> unit = "caml_CL_Sprite_unset_play_loop" "noalloc"
external unset_play_pingpong : t -> unit = "caml_CL_Sprite_unset_play_pingpong" "noalloc"
external unset_play_backward : t -> unit = "caml_CL_Sprite_unset_play_backward" "noalloc"


external is_null : t -> bool = "caml_CL_Sprite_is_null"
external get_angle : t -> CL_Angle.t = "caml_CL_Sprite_get_angle"
external get_base_angle : t -> CL_Angle.t = "caml_CL_Sprite_get_base_angle"

external get_alpha : t -> float = "caml_CL_Sprite_get_alpha"
external get_color : t -> CL_Colorf.t = "caml_CL_Sprite_get_color"
external get_size : t -> CL_Size.t = "caml_CL_Sprite_get_size"
external get_current_frame : t -> int = "caml_CL_Sprite_get_current_frame"
external get_frame_count : t -> int = "caml_CL_Sprite_get_frame_count"
external get_id : t -> int = "caml_CL_Sprite_get_id"
external get_width : t -> int = "caml_CL_Sprite_get_width"
external get_height : t -> int = "caml_CL_Sprite_get_height"
external get_linear_filter : t -> bool = "caml_CL_Sprite_get_linear_filter"
external is_play_loop : t -> bool = "caml_CL_Sprite_is_play_loop"
external is_play_backward : t -> bool = "caml_CL_Sprite_is_play_backward"
external is_play_pingpong : t -> bool = "caml_CL_Sprite_is_play_pingpong"
external is_finished : t -> bool = "caml_CL_Sprite_is_finished"
external is_looping : t -> bool = "caml_CL_Sprite_is_looping"

external get_frame_delay : t -> frame:int -> int = "caml_CL_Sprite_get_frame_delay"
external get_frame_offset : t -> frame:int -> CL_Point.t = "caml_CL_Sprite_get_frame_offset"
external get_frame_size : t -> frame:int -> CL_Size.t = "caml_CL_Sprite_get_frame_size"

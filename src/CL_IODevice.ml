(* bindings for CL_IODevice *)
type 'a t

external is_null : 'a t -> bool
  = "caml_CL_IODevice_is_null"

external get_size : 'a t -> int
  = "caml_CL_IODevice_get_size"

external get_position : 'a t -> int
  = "caml_CL_IODevice_get_position"

external is_little_endian : 'a t -> bool
  = "caml_CL_IODevice_is_little_endian"

external set_little_endian_mode : 'a t -> unit
  = "caml_CL_IODevice_set_little_endian_mode"

external set_big_endian_mode : 'a t -> unit
  = "caml_CL_IODevice_set_big_endian_mode"

external set_system_mode : 'a t -> unit
  = "caml_CL_IODevice_set_system_mode"

external send : 'a t -> data:string -> ?receive_all:bool -> unit -> int
  = "caml_CL_IODevice_send"

external receive : 'a t -> data:bytes -> ?receive_all:bool -> unit -> int
  = "caml_CL_IODevice_receive"

type seek_mode =
  | Seek_set
  | Seek_cur
  | Seek_end

external seek : 'a t -> pos:int -> mode:seek_mode -> bool
  = "caml_CL_IODevice_seek"

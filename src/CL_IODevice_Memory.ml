(* bindings for CL_IODevice_Memory *)

type io_device_memory
type t = io_device_memory CL_IODevice.t

external init : unit -> t = "caml_CL_IODevice_Memory_init"
external delete : t -> unit = "caml_CL_IODevice_Memory_delete"

external from_buffer : buf:CL_DataBuffer.t -> t
  = "caml_CL_IODevice_Memory_init_from_buffer"

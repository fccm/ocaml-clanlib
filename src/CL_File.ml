type file
type t = file CL_IODevice.t
external init : filename:string -> t = "caml_CL_File_init"
external delete : t -> unit = "caml_CL_File_delete"

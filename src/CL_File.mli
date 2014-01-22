(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__File.html}
  class CL_File} *)

type file
type t = file CL_IODevice.t

external init : filename:string -> t = "caml_CL_File_init"
external delete : t -> unit = "caml_CL_File_delete"

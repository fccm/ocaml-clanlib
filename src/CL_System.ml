(* ocaml-clanlib: ocaml bindings to the clanlib
 Copyright (C) 2013 Florent Monnier (monnier dot florent on gmail)
 Code provided under MIT license:
 See the file MIT_License.txt or this URL:
 http://opensource.org/licenses/mit-license.php
 This software is provided "AS IS", without warranty of any kind. *)

type uint = int

external sleep: millis:int -> unit
  = "caml_CL_System_sleep" "noalloc"

external get_time : unit -> uint = "caml_CL_System_get_time" "noalloc"
external get_num_cores : unit -> int = "caml_CL_System_get_num_cores" "noalloc"
(*
external detect_mmx : unit -> bool = "caml_CL_System_detect_mmx" "noalloc"
external detect_3dnow : unit -> bool = "caml_CL_System_detect_3dnow" "noalloc"
external detect_ext_3dnow : unit -> bool = "caml_CL_System_detect_ext_3dnow" "noalloc"
*)

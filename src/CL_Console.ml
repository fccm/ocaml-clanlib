(* ocaml-clanlib: ocaml bindings to the clanlib
 Copyright (C) 2013 Florent Monnier (monnier dot florent on gmail)
 Code provided under MIT license:
 See the file MIT_License.txt or this URL:
 http://opensource.org/licenses/mit-license.php
 This software is provided "AS IS", without warranty of any kind. *)

external write_line: string -> unit = "caml_CL_Console_write_line"

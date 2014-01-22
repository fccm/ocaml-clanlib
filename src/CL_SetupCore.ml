(* ocaml-clanlib: ocaml bindings to the clanlib
 Copyright (C) 2013 Florent Monnier (monnier dot florent on gmail)
 Code provided under MIT license:
 See the file MIT_License.txt or this URL:
 http://opensource.org/licenses/mit-license.php
 This software is provided "AS IS", without warranty of any kind. *)

type setup_core
external init: unit -> setup_core
  = "caml_CL_SetupCore_init"

external delete : setup_core -> unit
  = "caml_CL_SetupCore_delete"

let _setup_core = ref None
let init () =
  _setup_core := Some (init ())

let is_init () =
  !_setup_core <> None

let deinit () =
  match !_setup_core with
  | None -> ()
  | Some sc ->
      delete sc;
      _setup_core := None

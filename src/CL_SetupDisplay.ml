(* ocaml-clanlib: ocaml bindings to the clanlib
 Copyright (C) 2013 Florent Monnier (monnier dot florent on gmail)
 Code provided under MIT license:
 See the file MIT_License.txt or this URL:
 http://opensource.org/licenses/mit-license.php
 This software is provided "AS IS", without warranty of any kind. *)

type setup_display

external init : unit -> setup_display
  = "caml_CL_SetupDisplay_init"

external delete : setup_display -> unit
  = "caml_CL_SetupDisplay_delete"

let _setup_display = ref None

let init () =
  _setup_display := Some (init ())

let is_init () =
  !_setup_display <> None

let deinit () =
  match !_setup_display with
  | None -> ()
  | Some sd ->
      delete sd;
      _setup_display := None

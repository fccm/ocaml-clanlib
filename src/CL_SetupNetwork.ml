(* ocaml-clanlib: ocaml bindings to the clanlib
 Copyright (C) 2013 Florent Monnier (monnier dot florent on gmail)
 Code provided under MIT license:
 See the file MIT_License.txt or this URL:
 http://opensource.org/licenses/mit-license.php
 This software is provided "AS IS", without warranty of any kind. *)

type t
external init : unit -> t
  = "caml_CL_SetupNetwork_init"

external delete : t -> unit
  = "caml_CL_SetupNetwork_delete"

let _setup_network = ref None
let init () =
  _setup_network := Some (init ())

let is_init () =
  !_setup_network <> None

let deinit () =
  match !_setup_network with
  | None -> ()
  | Some sn ->
      delete sn;
      _setup_network := None

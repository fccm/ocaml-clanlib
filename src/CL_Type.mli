(** *)
(** The purpose of this module is to resolve mutual dependencies of modules. *)

type graphic_context
(** equivalent to {!CL_GraphicContext.t} *)

type primitives_array
(** equivalent to {!CL_PrimitivesArray.t} *)

(**/**)

type uint = int
(** wraps an unsigned int in the ClanLib API *)

external are_pointers_boxed : unit -> bool
  = "caml_are_pointers_boxed" "noalloc"

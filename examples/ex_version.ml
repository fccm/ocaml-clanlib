module Ver = CL_Version.Compiled

let () =
  Printf.printf "Version as string: '%s'\n" (Ver.get_as_string ());
  Printf.printf "Current (hex): %06X\n" (Ver.get_as_int ());

  Printf.printf "Any to hex (1,2,0): %06X\n" (Ver.int_of_version (1,2,0));

  Printf.printf "Compare (1,0,0): %d\n" (Ver.compare (1,0,0));
  Printf.printf "Compare (4,0,0): %d\n" (Ver.compare (4,0,0));

  Printf.printf "Compare (1,0,0): %d\n" (Ver.compare (1,0,0));
  Printf.printf "Compare (4,0,0): %d\n" (Ver.compare (4,0,0));

  Printf.printf "Compare2 (2,1,2) (2,3,6): %d\n" (Ver.compare2 (2,1,2) (2,3,6));
  Printf.printf "Compare2 (2,1,2) (2,3,6): %d\n" (Ver.compare2 (2,1,2) (2,3,6));
;;

let () =
  let vs = [
    (1,0,0);
    (4,0,0);
    (2,1,2);
    (2,3,6);
  ] in
  let vs = List.sort Ver.compare2 vs in
  let vs = List.map Ver.int_of_version vs in
  List.iter (Printf.printf " %06X") vs;
  print_newline ()

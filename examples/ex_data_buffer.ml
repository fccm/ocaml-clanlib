(* Example of use of the CL_DataBuffer module *)

let print_data_buffer b =
  let n = CL_DataBuffer.get_size b in
  for i = 0 to n - 1 do
    let c = CL_DataBuffer.get b i in
    Printf.printf " %02X" (Char.code c)
  done;
  print_newline ()

let print_ml_string s =
  let n = String.length s in
  for i = 0 to n - 1 do
    let c = String.get s i in
    Printf.printf " %02X" (Char.code c)
  done;
  print_newline ()

let () =
  let s = "ABCDEFGHIJK" in
  let b = CL_DataBuffer.of_string s in
  (*
  CL_DataBuffer.set_size b 20;
  CL_DataBuffer.set_capacity b 36;
  CL_DataBuffer.set b 0 '\000';
  *)

  Printf.printf "string len: %d\nbuffer len: %d\n"
    (String.length s)
    (CL_DataBuffer.get_size b);

  print_string "string: ";  print_ml_string s;
  print_string "buffer: ";  print_data_buffer b;
;;

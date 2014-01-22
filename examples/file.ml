let () =
  let file = CL_File.init Sys.argv.(1) in
  Printf.printf "file size: %d\n"
    (CL_IODevice.get_size file)

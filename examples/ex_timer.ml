let () =
  let tm = CL_Timer.init () in
  Printf.printf "rep: %B\n" (CL_Timer.is_repeating tm);
  CL_Timer.start tm ~timeout:600 ~repeat:false;
  Printf.printf "tm-out: %d\n" (CL_Timer.get_timeout tm);
  CL_System.sleep 5;
  Printf.printf "tm-out: %d\n" (CL_Timer.get_timeout tm);
;;

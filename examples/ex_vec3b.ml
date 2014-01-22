open CL_Vec3f.Infix

let a () =
  let v1 = CL_Vec3f.init (1.0, 2.0, 3.0) in
  let v2 = CL_Vec3f.init (6.0, 4.0, 8.0) in
  let v3 = v1 + v2 in
  let x, y, z = CL_Vec3f.to_triplet v3 in
  CL_Vec3f.print v3;
  Printf.printf "tr: %g %g %g\n" x y z;
;;

let () =
  let v1 = CL_Vec3f.init (10.0, 22.0, 1.0) in
  let v2 = CL_Vec3f.init (10.0, 22.0, 2.0) in
  let v3 = v1 + v2 in
  let x, y, z = CL_Vec3f.to_triplet v3 in
  CL_Vec3f.print v3;
  Printf.printf "tr: %g %g %g\n" x y z;
;;


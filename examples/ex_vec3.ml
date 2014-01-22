let () =
  let vec1 = CL_Vec3f.init 1.0 2.0 3.0 in
  CL_Vec3f.print vec1;

  let vec0 = CL_Vec3f.init 5.0 3.0 0.0 in
  CL_Vec3f.print vec0;

  let vec2 = CL_Vec3f.normalize vec1 in
  CL_Vec3f.print vec2;

  Printf.printf "len: %f\n" (CL_Vec3f.length vec1);
  Printf.printf "dot: %f\n" (CL_Vec3f.dot vec1 vec0);

  let vec3 = CL_Vec3f.cross vec1 vec2 in
  CL_Vec3f.print vec3;

  Printf.printf "dist: %f\n" (CL_Vec3f.distance vec1 vec0);

  CL_Vec3f.delete vec0;
  CL_Vec3f.delete vec1;
  CL_Vec3f.delete vec2;
  CL_Vec3f.delete vec3;
;;

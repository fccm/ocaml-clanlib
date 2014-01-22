
type pointf = CL_Pointf.t

external point_right_of_line :
  a:pointf -> b:pointf -> p:pointf -> float
  = "caml_CL_LineMath_point_right_of_line" "noalloc"

external midpoint :
  a:pointf -> b:pointf -> pointf
  = "caml_CL_LineMath_midpoint" "noalloc"

external closest_point :
  p:pointf -> a:pointf -> b:pointf -> pointf
  = "caml_CL_LineMath_closest_point" "noalloc"

external closest_point_relative :
  p:pointf -> a:pointf -> b:pointf -> float
  = "caml_CL_LineMath_closest_point_relative" "noalloc"

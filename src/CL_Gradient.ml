type t = {
  first_color: CL_Colorf.t;
  second_color: CL_Colorf.t;
}

let init ~first_color ~second_color =
  { first_color; second_color }

let fst grad = grad.first_color
let snd grad = grad.second_color

type t = {
  left : float;
  top : float;
  right : float;
  bottom : float;
}

let init ~left ~top ~right ~bottom =
  { left; top; right; bottom }

let of_size ~width ~height =
  { left = 0.0; top = 0.0; right = width; bottom = height; }

let texture_unit1_coords =
  { left = 0.0; top = 0.0; right = 1.0; bottom = 1.0; }

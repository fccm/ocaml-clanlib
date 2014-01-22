type t = {
  left : int;
  top : int;
  right : int;
  bottom : int;
}

let init ~left ~top ~right ~bottom =
  { left; top; right; bottom }

let of_size ~width ~height =
  { left = 0; top = 0; right = width; bottom = height; }

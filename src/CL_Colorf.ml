type t = {
  r: float;
  g: float;
  b: float;
  a: float;
}

let init ~r ~g ~b ?(a = 1.0) () =
  { r; g; b; a }

let rgba (r, g, b, a) =
  { r; g; b; a }

let rgb (r, g, b) =
  { r; g; b; a = 1.0 }

let aliceblue = rgb (240.0 /. 255.0, 248.0 /. 255.0, 255.0 /. 255.0)
let antiquewhite = rgb (250.0 /. 255.0, 235.0 /. 255.0, 215.0 /. 255.0)
let aqua = rgb ( 0.0 /. 255.0, 255.0 /. 255.0, 255.0 /. 255.0)
let aquamarine = rgb (127.0 /. 255.0, 255.0 /. 255.0, 212.0 /. 255.0)
let azure = rgb (240.0 /. 255.0, 255.0 /. 255.0, 255.0 /. 255.0)
let beige = rgb (245.0 /. 255.0, 245.0 /. 255.0, 220.0 /. 255.0)
let bisque = rgb (255.0 /. 255.0, 228.0 /. 255.0, 196.0 /. 255.0)
let black = rgb ( 0.0 /. 255.0, 0.0 /. 255.0, 0.0 /. 255.0)
let blanchedalmond = rgb (255.0 /. 255.0, 235.0 /. 255.0, 205.0 /. 255.0)
let blue = rgb ( 0.0 /. 255.0, 0.0 /. 255.0, 255.0 /. 255.0)
let blueviolet = rgb (138.0 /. 255.0, 43.0 /. 255.0, 226.0 /. 255.0)
let brown = rgb (165.0 /. 255.0, 42.0 /. 255.0, 42.0 /. 255.0)
let burlywood = rgb (222.0 /. 255.0, 184.0 /. 255.0, 135.0 /. 255.0)
let cadetblue = rgb ( 95.0 /. 255.0, 158.0 /. 255.0, 160.0 /. 255.0)
let chartreuse = rgb (127.0 /. 255.0, 255.0 /. 255.0, 0.0 /. 255.0)
let chocolate = rgb (210.0 /. 255.0, 105.0 /. 255.0, 30.0 /. 255.0)
let coral = rgb (255.0 /. 255.0, 127.0 /. 255.0, 80.0 /. 255.0)
let cornflowerblue = rgb (100.0 /. 255.0, 149.0 /. 255.0, 237.0 /. 255.0)
let cornsilk = rgb (255.0 /. 255.0, 248.0 /. 255.0, 220.0 /. 255.0)
let crimson = rgb (220.0 /. 255.0, 20.0 /. 255.0, 60.0 /. 255.0)
let cyan = rgb ( 0.0 /. 255.0, 255.0 /. 255.0, 255.0 /. 255.0)
let darkblue = rgb ( 0.0 /. 255.0, 0.0 /. 255.0, 139.0 /. 255.0)
let darkcyan = rgb ( 0.0 /. 255.0, 139.0 /. 255.0, 139.0 /. 255.0)
let darkgoldenrod = rgb (184.0 /. 255.0, 134.0 /. 255.0, 11.0 /. 255.0)
let darkgray = rgb (169.0 /. 255.0, 169.0 /. 255.0, 169.0 /. 255.0)
let darkgreen = rgb ( 0.0 /. 255.0, 100.0 /. 255.0, 0.0 /. 255.0)
let darkgrey = rgb (169.0 /. 255.0, 169.0 /. 255.0, 169.0 /. 255.0)
let darkkhaki = rgb (189.0 /. 255.0, 183.0 /. 255.0, 107.0 /. 255.0)
let darkmagenta = rgb (139.0 /. 255.0, 0.0 /. 255.0, 139.0 /. 255.0)
let darkolivegreen = rgb ( 85.0 /. 255.0, 107.0 /. 255.0, 47.0 /. 255.0)
let darkorange = rgb (255.0 /. 255.0, 140.0 /. 255.0, 0.0 /. 255.0)
let darkorchid = rgb (153.0 /. 255.0, 50.0 /. 255.0, 204.0 /. 255.0)
let darkred = rgb (139.0 /. 255.0, 0.0 /. 255.0, 0.0 /. 255.0)
let darksalmon = rgb (233.0 /. 255.0, 150.0 /. 255.0, 122.0 /. 255.0)
let darkseagreen = rgb (143.0 /. 255.0, 188.0 /. 255.0, 143.0 /. 255.0)
let darkslateblue = rgb ( 72.0 /. 255.0, 61.0 /. 255.0, 139.0 /. 255.0)
let darkslategray = rgb ( 47.0 /. 255.0, 79.0 /. 255.0, 79.0 /. 255.0)
let darkslategrey = rgb ( 47.0 /. 255.0, 79.0 /. 255.0, 79.0 /. 255.0)
let darkturquoise = rgb ( 0.0 /. 255.0, 206.0 /. 255.0, 209.0 /. 255.0)
let darkviolet = rgb (148.0 /. 255.0, 0.0 /. 255.0, 211.0 /. 255.0)
let deeppink = rgb (255.0 /. 255.0, 20.0 /. 255.0, 147.0 /. 255.0)
let deepskyblue = rgb ( 0.0 /. 255.0, 191.0 /. 255.0, 255.0 /. 255.0)
let dimgray = rgb (105.0 /. 255.0, 105.0 /. 255.0, 105.0 /. 255.0)
let dimgrey = rgb (105.0 /. 255.0, 105.0 /. 255.0, 105.0 /. 255.0)
let dodgerblue = rgb ( 30.0 /. 255.0, 144.0 /. 255.0, 255.0 /. 255.0)
let firebrick = rgb (178.0 /. 255.0, 34.0 /. 255.0, 34.0 /. 255.0)
let floralwhite = rgb (255.0 /. 255.0, 250.0 /. 255.0, 240.0 /. 255.0)
let forestgreen = rgb ( 34.0 /. 255.0, 139.0 /. 255.0, 34.0 /. 255.0)
let fuchsia = rgb (255.0 /. 255.0, 0.0 /. 255.0, 255.0 /. 255.0)
let gainsboro = rgb (220.0 /. 255.0, 220.0 /. 255.0, 220.0 /. 255.0)
let ghostwhite = rgb (248.0 /. 255.0, 248.0 /. 255.0, 255.0 /. 255.0)
let gold = rgb (255.0 /. 255.0, 215.0 /. 255.0, 0.0 /. 255.0)
let goldenrod = rgb (218.0 /. 255.0, 165.0 /. 255.0, 32.0 /. 255.0)
let gray = rgb (128.0 /. 255.0, 128.0 /. 255.0, 128.0 /. 255.0)
let grey = rgb (128.0 /. 255.0, 128.0 /. 255.0, 128.0 /. 255.0)
let green = rgb ( 0.0 /. 255.0, 128.0 /. 255.0, 0.0 /. 255.0)
let greenyellow = rgb (173.0 /. 255.0, 255.0 /. 255.0, 47.0 /. 255.0)
let honeydew = rgb (240.0 /. 255.0, 255.0 /. 255.0, 240.0 /. 255.0)
let hotpink = rgb (255.0 /. 255.0, 105.0 /. 255.0, 180.0 /. 255.0)
let indianred = rgb (205.0 /. 255.0, 92.0 /. 255.0, 92.0 /. 255.0)
let indigo = rgb ( 75.0 /. 255.0, 0.0 /. 255.0, 130.0 /. 255.0)
let ivory = rgb (255.0 /. 255.0, 255.0 /. 255.0, 240.0 /. 255.0)
let khaki = rgb (240.0 /. 255.0, 230.0 /. 255.0, 140.0 /. 255.0)
let lavender = rgb (230.0 /. 255.0, 230.0 /. 255.0, 250.0 /. 255.0)
let lavenderblush = rgb (255.0 /. 255.0, 240.0 /. 255.0, 245.0 /. 255.0)
let lawngreen = rgb (124.0 /. 255.0, 252.0 /. 255.0, 0.0 /. 255.0)
let lemonchiffon = rgb (255.0 /. 255.0, 250.0 /. 255.0, 205.0 /. 255.0)
let lightblue = rgb (173.0 /. 255.0, 216.0 /. 255.0, 230.0 /. 255.0)
let lightcoral = rgb (240.0 /. 255.0, 128.0 /. 255.0, 128.0 /. 255.0)
let lightcyan = rgb (224.0 /. 255.0, 255.0 /. 255.0, 255.0 /. 255.0)
let lightgoldenrodyellow = rgb (250.0 /. 255.0, 250.0 /. 255.0, 210.0 /. 255.0)
let lightgray = rgb (211.0 /. 255.0, 211.0 /. 255.0, 211.0 /. 255.0)
let lightgreen = rgb (144.0 /. 255.0, 238.0 /. 255.0, 144.0 /. 255.0)
let lightgrey = rgb (211.0 /. 255.0, 211.0 /. 255.0, 211.0 /. 255.0)
let lightpink = rgb (255.0 /. 255.0, 182.0 /. 255.0, 193.0 /. 255.0)
let lightsalmon = rgb (255.0 /. 255.0, 160.0 /. 255.0, 122.0 /. 255.0)
let lightseagreen = rgb ( 32.0 /. 255.0, 178.0 /. 255.0, 170.0 /. 255.0)
let lightskyblue = rgb (135.0 /. 255.0, 206.0 /. 255.0, 250.0 /. 255.0)
let lightslategray = rgb (119.0 /. 255.0, 136.0 /. 255.0, 153.0 /. 255.0)
let lightslategrey = rgb (119.0 /. 255.0, 136.0 /. 255.0, 153.0 /. 255.0)
let lightsteelblue = rgb (176.0 /. 255.0, 196.0 /. 255.0, 222.0 /. 255.0)
let lightyellow = rgb (255.0 /. 255.0, 255.0 /. 255.0, 224.0 /. 255.0)
let lime = rgb ( 0.0 /. 255.0, 255.0 /. 255.0, 0.0 /. 255.0)
let limegreen = rgb ( 50.0 /. 255.0, 205.0 /. 255.0, 50.0 /. 255.0)
let linen = rgb (250.0 /. 255.0, 240.0 /. 255.0, 230.0 /. 255.0)
let magenta = rgb (255.0 /. 255.0, 0.0 /. 255.0, 255.0 /. 255.0)
let maroon = rgb (128.0 /. 255.0, 0.0 /. 255.0, 0.0 /. 255.0)
let mediumaquamarine = rgb (102.0 /. 255.0, 205.0 /. 255.0, 170.0 /. 255.0)
let mediumblue = rgb ( 0.0 /. 255.0, 0.0 /. 255.0, 205.0 /. 255.0)
let mediumorchid = rgb (186.0 /. 255.0, 85.0 /. 255.0, 211.0 /. 255.0)
let mediumpurple = rgb (147.0 /. 255.0, 112.0 /. 255.0, 219.0 /. 255.0)
let mediumseagreen = rgb ( 60.0 /. 255.0, 179.0 /. 255.0, 113.0 /. 255.0)
let mediumslateblue = rgb (123.0 /. 255.0, 104.0 /. 255.0, 238.0 /. 255.0)
let mediumspringgreen = rgb ( 0.0 /. 255.0, 250.0 /. 255.0, 154.0 /. 255.0)
let mediumturquoise = rgb ( 72.0 /. 255.0, 209.0 /. 255.0, 204.0 /. 255.0)
let mediumvioletred = rgb (199.0 /. 255.0, 21.0 /. 255.0, 133.0 /. 255.0)
let midnightblue = rgb ( 25.0 /. 255.0, 25.0 /. 255.0, 112.0 /. 255.0)
let mintcream = rgb (245.0 /. 255.0, 255.0 /. 255.0, 250.0 /. 255.0)
let mistyrose = rgb (255.0 /. 255.0, 228.0 /. 255.0, 225.0 /. 255.0)
let moccasin = rgb (255.0 /. 255.0, 228.0 /. 255.0, 181.0 /. 255.0)
let navajowhite = rgb (255.0 /. 255.0, 222.0 /. 255.0, 173.0 /. 255.0)
let navy = rgb ( 0.0 /. 255.0, 0.0 /. 255.0, 128.0 /. 255.0)
let oldlace = rgb (253.0 /. 255.0, 245.0 /. 255.0, 230.0 /. 255.0)
let olive = rgb (128.0 /. 255.0, 128.0 /. 255.0, 0.0 /. 255.0)
let olivedrab = rgb (107.0 /. 255.0, 142.0 /. 255.0, 35.0 /. 255.0)
let orange = rgb (255.0 /. 255.0, 165.0 /. 255.0, 0.0 /. 255.0)
let orangered = rgb (255.0 /. 255.0, 69.0 /. 255.0, 0.0 /. 255.0)
let orchid = rgb (218.0 /. 255.0, 112.0 /. 255.0, 214.0 /. 255.0)
let palegoldenrod = rgb (238.0 /. 255.0, 232.0 /. 255.0, 170.0 /. 255.0)
let palegreen = rgb (152.0 /. 255.0, 251.0 /. 255.0, 152.0 /. 255.0)
let paleturquoise = rgb (175.0 /. 255.0, 238.0 /. 255.0, 238.0 /. 255.0)
let palevioletred = rgb (219.0 /. 255.0, 112.0 /. 255.0, 147.0 /. 255.0)
let papayawhip = rgb (255.0 /. 255.0, 239.0 /. 255.0, 213.0 /. 255.0)
let peachpuff = rgb (255.0 /. 255.0, 218.0 /. 255.0, 185.0 /. 255.0)
let peru = rgb (205.0 /. 255.0, 133.0 /. 255.0, 63.0 /. 255.0)
let pink = rgb (255.0 /. 255.0, 192.0 /. 255.0, 203.0 /. 255.0)
let plum = rgb (221.0 /. 255.0, 160.0 /. 255.0, 221.0 /. 255.0)
let powderblue = rgb (176.0 /. 255.0, 224.0 /. 255.0, 230.0 /. 255.0)
let purple = rgb (128.0 /. 255.0, 0.0 /. 255.0, 128.0 /. 255.0)
let red = rgb (255.0 /. 255.0, 0.0 /. 255.0, 0.0 /. 255.0)
let rosybrown = rgb (188.0 /. 255.0, 143.0 /. 255.0, 143.0 /. 255.0)
let royalblue = rgb ( 65.0 /. 255.0, 105.0 /. 255.0, 225.0 /. 255.0)
let saddlebrown = rgb (139.0 /. 255.0, 69.0 /. 255.0, 19.0 /. 255.0)
let salmon = rgb (250.0 /. 255.0, 128.0 /. 255.0, 114.0 /. 255.0)
let sandybrown = rgb (244.0 /. 255.0, 164.0 /. 255.0, 96.0 /. 255.0)
let seagreen = rgb ( 46.0 /. 255.0, 139.0 /. 255.0, 87.0 /. 255.0)
let seashell = rgb (255.0 /. 255.0, 245.0 /. 255.0, 238.0 /. 255.0)
let sienna = rgb (160.0 /. 255.0, 82.0 /. 255.0, 45.0 /. 255.0)
let silver = rgb (192.0 /. 255.0, 192.0 /. 255.0, 192.0 /. 255.0)
let skyblue = rgb (135.0 /. 255.0, 206.0 /. 255.0, 235.0 /. 255.0)
let slateblue = rgb (106.0 /. 255.0, 90.0 /. 255.0, 205.0 /. 255.0)
let slategray = rgb (112.0 /. 255.0, 128.0 /. 255.0, 144.0 /. 255.0)
let slategrey = rgb (112.0 /. 255.0, 128.0 /. 255.0, 144.0 /. 255.0)
let snow = rgb (255.0 /. 255.0, 250.0 /. 255.0, 250.0 /. 255.0)
let springgreen = rgb ( 0.0 /. 255.0, 255.0 /. 255.0, 127.0 /. 255.0)
let steelblue = rgb ( 70.0 /. 255.0, 130.0 /. 255.0, 180.0 /. 255.0)
let tan = rgb (210.0 /. 255.0, 180.0 /. 255.0, 140.0 /. 255.0)
let teal = rgb ( 0.0 /. 255.0, 128.0 /. 255.0, 128.0 /. 255.0)
let thistle = rgb (216.0 /. 255.0, 191.0 /. 255.0, 216.0 /. 255.0)
let tomato = rgb (255.0 /. 255.0, 99.0 /. 255.0, 71.0 /. 255.0)
let transparent = rgba (0.0 /. 255.0,0.0 /. 255.0,0.0 /. 255.0,0.0 /. 255.0)
let turquoise = rgb ( 64.0 /. 255.0, 224.0 /. 255.0, 208.0 /. 255.0)
let violet = rgb (238.0 /. 255.0, 130.0 /. 255.0, 238.0 /. 255.0)
let wheat = rgb (245.0 /. 255.0, 222.0 /. 255.0, 179.0 /. 255.0)
let white = rgb (255.0 /. 255.0, 255.0 /. 255.0, 255.0 /. 255.0)
let whitesmoke = rgb (245.0 /. 255.0, 245.0 /. 255.0, 245.0 /. 255.0)
let yellow = rgb (255.0 /. 255.0, 255.0 /. 255.0, 0.0 /. 255.0)
let yellowgreen = rgb (154.0 /. 255.0, 205.0 /. 255.0, 50.0 /. 255.0)

let gray10 = rgb (26.0 /. 255.0,26.0 /. 255.0,26.0 /. 255.0)
let gray20 = rgb (51.0 /. 255.0,51.0 /. 255.0,51.0 /. 255.0)
let gray30 = rgb (77.0 /. 255.0,77.0 /. 255.0,77.0 /. 255.0)
let gray40 = rgb (104.0 /. 255.0,104.0 /. 255.0,104.0 /. 255.0)
let gray50 = rgb (128.0 /. 255.0,128.0 /. 255.0,128.0 /. 255.0)
let gray60 = rgb (153.0 /. 255.0,153.0 /. 255.0,153.0 /. 255.0)
let gray70 = rgb (178.0 /. 255.0,178.0 /. 255.0,178.0 /. 255.0)
let gray80 = rgb (204.0 /. 255.0,204.0 /. 255.0,204.0 /. 255.0)
let gray90 = rgb (230.0 /. 255.0,230.0 /. 255.0,230.0 /. 255.0)

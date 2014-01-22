#ifndef _CL_PERLINNOISE_INC
#define _CL_PERLINNOISE_INC

#include <ClanLib/Display/Image/perlin_noise.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_PerlinNoise(v) (Val_ptr<CL_PerlinNoise>(v))
#define CL_PerlinNoise_val(v) (Ptr_val<CL_PerlinNoise>(v))

#else

#define Val_CL_PerlinNoise(v) ((value)(v))
#define CL_PerlinNoise_val(v) ((CL_PerlinNoise *)(v))

#endif

#endif // _CL_PERLINNOISE_INC

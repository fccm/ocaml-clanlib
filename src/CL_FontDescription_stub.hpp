#ifndef _CL_FONTDESCRIPTION_INC
#define _CL_FONTDESCRIPTION_INC

#ifdef CL_WRAP_POINTERS

#define Val_CL_FontDescription(v) (Val_ptr<CL_FontDescription>(v))
#define CL_FontDescription_val(v) (Ptr_val<CL_FontDescription>(v))

#else

#define Val_CL_FontDescription(font) ((value)(font))
#define CL_FontDescription_val(font) ((CL_FontDescription *)(font))

#endif

#endif // _CL_FONTDESCRIPTION_INC

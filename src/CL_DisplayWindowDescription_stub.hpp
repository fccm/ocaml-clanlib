#ifndef _CL_DISPLAYWINDOWDESCRIPTION_INC
#define _CL_DISPLAYWINDOWDESCRIPTION_INC

#ifdef CL_WRAP_POINTERS

#define Val_CL_DisplayWindowDescription(v) (Val_ptr<CL_DisplayWindowDescription>(v))
#define CL_DisplayWindowDescription_val(v) (Ptr_val<CL_DisplayWindowDescription>(v))

#else

#define CL_DisplayWindowDescription_val(desc) ((CL_DisplayWindowDescription *)(desc))
#define Val_CL_DisplayWindowDescription(desc) ((value)(desc))

#endif

#endif // _CL_DISPLAYWINDOWDESCRIPTION_INC

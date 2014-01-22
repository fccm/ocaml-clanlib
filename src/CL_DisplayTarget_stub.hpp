#ifndef _CL_DISPLAYTARGET_INC
#define _CL_DISPLAYTARGET_INC

#ifdef CL_WRAP_POINTERS

#define Val_CL_DisplayTarget(v) (Val_ptr<CL_DisplayTarget>(v))
#define CL_DisplayTarget_val(v) (Ptr_val<CL_DisplayTarget>(v))

#else

#define Val_CL_DisplayTarget(dt) ((value)(dt))
#define CL_DisplayTarget_val(dt) ((CL_DisplayTarget *)(dt))

#endif

#endif // _CL_DISPLAYTARGET_INC

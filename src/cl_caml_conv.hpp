#ifndef _CL_CAML_CONV_INC
#define _CL_CAML_CONV_INC

#include <ClanLib/Core/Text/string_types.h>

#define Val_none Val_int(0)
#define Some_val(v) Field(v,0)

#define Val_char Val_long
#define Char_val Long_val

value Val_some(value v);
value Val_CL_String(const CL_String& cls);
value Val_CL_StringRef(const CL_StringRef& cls);

#define CL_StringRef_val(str) \
    CL_StringRef(String_val(str))

#define Option_val(Conv_val, ml_value, default_value) \
    (ml_value != Val_none ? Conv_val(Some_val(ml_value)) : default_value)

#define CL_String_val(s) CL_String(String_val(s))

#define Float_val(v) ((float)Double_val(v))

#define Val_unsigned_int Val_long
typedef unsigned int  unsigned_int;

#undef Bool_val
#define Bool_val(b) ((bool)(Long_val(b)))

#define bool_val Bool_val
#define Val_double caml_copy_double
#define Val_float(v) (caml_copy_double((double)(v)))

#define CHECK_UINT 1
#ifndef CHECK_UINT

#define UInt_val(v) ((unsigned int) Long_val(v))

#else
static inline
unsigned int UInt_val(value v) {
    long d = Long_val(v);
    if (d < 0) caml_invalid_argument("unsigned int");
    return (unsigned int) d;
}
#endif

/* wrapping pointers */

#ifdef CL_WRAP_POINTERS

struct voidptr {
    void *ptr;
};

#define Custom_ptr(v) \
    (((struct voidptr *) Data_custom_val(v))->ptr)

static int
compare_voidptrs(value v1, value v2)
{
    CAMLparam2(v1, v2);
    int ptr1, ptr2;
    ptr1 = (int) Custom_ptr(v1);
    ptr2 = (int) Custom_ptr(v2);
    CAMLreturn(ptr1 - ptr2);
}

static intnat
hash_voidptr(value v)
{
    CAMLparam1(v);
    void *ptr;
    ptr = Custom_ptr(v);
    CAMLreturn((intnat) ptr);
}

static char custom_ops_identifier[] = "clanlib_voidptr";
static struct custom_operations custom_ops = {
    identifier: custom_ops_identifier,
    finalize: NULL,
    compare: compare_voidptrs,
    hash: hash_voidptr,
    serialize: custom_serialize_default,
    deserialize: custom_deserialize_default
};

/* Wrap up an arbitrary void pointer in an opaque OCaml object. */
template<typename Type>
static inline
value Val_ptr(Type *ptr)
{
    CAMLparam0();
    CAMLlocal1(rv);
    rv = caml_alloc_custom(&custom_ops, sizeof(struct voidptr), 0, 1);
    Custom_ptr(rv) = ptr;
    CAMLreturn(rv);
}

/* Unwrap an arbitrary void pointer from an opaque OCaml object. */
template<typename Type>
static inline
Type * Ptr_val(value v)
{
    Type * ptr = (Type *) Custom_ptr(v);
    if (ptr == NULL) caml_invalid_argument("deleted object");
    return ptr;
}

/* Nullify the pointer may save us in many situations. */
static inline void
nullify_ptr(value v)
{
    Custom_ptr(v) = NULL;
}
#endif

#endif // _CL_CAML_CONV_INC
// vim: sw=4 sts=4 ts=4 et

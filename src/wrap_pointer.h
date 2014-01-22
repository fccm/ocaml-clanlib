#ifndef _CAML_WRAPPING_POINTERS_INC
#define _CAML_WRAPPING_POINTERS_INC

/* wrapping pointers */

struct voidptr {
    void *ptr;
};

static int
compare_voidptrs(value v1, value v2)
{
    CAMLparam2(v1, v2);
    int ptr1, ptr2;
    ptr1 = (int) ((struct voidptr *) Data_custom_val(v1))->ptr;
    ptr2 = (int) ((struct voidptr *) Data_custom_val(v2))->ptr;
    CAMLreturn(ptr1 - ptr2);
}

static intnat
hash_voidptr(value v)
{
    CAMLparam1(v);
    void *ptr;
    ptr = ((struct voidptr *) Data_custom_val(v))->ptr;
    CAMLreturn((intnat) ptr);
}

static struct custom_operations custom_ops = {
    identifier: "ocaml_voidptr_wrapper",
    finalize: NULL,
    compare: compare_voidptrs,
    hash: hash_voidptr,
    serialize: custom_serialize_default,
    deserialize: custom_deserialize_default
};

/* Wrap up an arbitrary void pointer in an opaque OCaml object. */
static inline value
Val_voidptr(void *ptr)
{
    CAMLparam0();
    CAMLlocal1(rv);
    rv = caml_alloc_custom(&custom_ops, sizeof(struct voidptr), 0, 1);
    ((struct voidptr *) Data_custom_val (rv))->ptr = ptr;
    CAMLreturn(rv);
}

/* Unwrap an arbitrary void pointer from an opaque OCaml object. */
static inline void *
_Voidptr_val(value rv)
{
    return ((struct voidptr *) Data_custom_val (rv))->ptr;
}
#define Voidptr_val(type,rv) ((type) _Voidptr_val ((rv)))

/* Nullify the pointer prevents from using it anymore. */
static inline void
nullify_voidptr(value rv)
{
    ((struct voidptr *) Data_custom_val (rv))->ptr = NULL;
}

#endif // _CAML_WRAPPING_POINTERS_INC

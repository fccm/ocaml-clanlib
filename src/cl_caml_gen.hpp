#ifndef _CL_GEN_MACRO_INC
#define _CL_GEN_MACRO_INC


#define quot(x) #x

#define OBJ_INIT(klass) \
CAMLextern_C value \
caml_##klass##_init(value unit) { \
    klass *obj = new klass(); \
    return Val_##klass(obj); \
}

#define OBJ_DELETE(klass) \
CAMLextern_C value \
caml_##klass##_delete(value obj) { \
    delete klass##_val(obj); \
    nullify_ptr(obj); \
    return Val_unit; \
}


#define ML_OBJ_INIT(klass) \
external init : unit -> t = quot(caml_##klass##_init)

#define ML_OBJ_DELETE(klass) \
external delete : t -> unit = quot(caml_##klass##_delete)


// call a method

#define CALL_METH0(klass, meth) \
CAMLextern_C value \
caml_##klass##_##meth(value obj) { \
    klass##_val(obj)->meth(); \
    return Val_unit; \
}

#define CALL_METH1(klass, meth, conv, ml_type) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v) { \
    klass##_val(obj)->meth(conv(v)); \
    return Val_unit; \
}

#define CALL_METH2(klass, meth, conv1, ml_type1, conv2, ml_type2) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v1, value v2) { \
    klass##_val(obj)->meth(conv1(v1), conv2(v2)); \
    return Val_unit; \
}

#define CALL_METH3(klass, meth, conv1, ml_type1, conv2, ml_type2, conv3, ml_type3) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v1, value v2, value v3) { \
    klass##_val(obj)->meth(conv1(v1), conv2(v2), conv3(v3)); \
    return Val_unit; \
}

#define CALL_METH4(klass, meth, c1, ml_t1, c2, ml_t2, c3, ml_t3, c4, ml_t4) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v1, value v2, value v3, value v4) { \
    klass##_val(obj)->meth(c1(v1), c2(v2), c3(v3), c4(v4)); \
    return Val_unit; \
}

#define CALL_METH5(klass, meth, c1, ml_t1, c2, ml_t2, c3, ml_t3, c4, ml_t4, c5, ml_t5) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v1, value v2, value v3, value v4, value v5) { \
    klass##_val(obj)->meth(c1(v1), c2(v2), c3(v3), c4(v4), c5(v5)); \
    return Val_unit; \
}


#define ML_CALL_METH0(klass, meth) \
external meth : t -> unit = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_METH1(klass, meth, conv, ml_type) \
external meth : t -> ml_type -> unit = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_METH2(klass, meth, conv1, ml_type1, conv2, ml_type2) \
external meth : t -> ml_type1 -> ml_type2 -> unit = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_METH3(klass, meth, conv1, ml_type1, conv2, ml_type2, conv3, ml_type3) \
external meth : t -> ml_type1 -> ml_type2 -> ml_type3 -> unit = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_METH4(klass, meth, c1, ml_t1, c2, ml_t2, c3, ml_t3, c4, ml_t4) \
external meth : t -> ml_t1 -> ml_t2 -> ml_t3 -> ml_t4 -> unit = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_METH5(klass, meth, c1, ml_t1, c2, ml_t2, c3, ml_t3, c4, ml_t4, c5, ml_t5) \
external meth : t -> ml_t1 -> ml_t2 -> ml_t3 -> ml_t4 -> ml_t5 -> unit \
  = quot(caml_##klass##_##meth##_bc) \
  = quot(caml_##klass##_##meth) "noalloc"


#define CALL_GETTER(klass, meth, c_type, ml_type) \
CAMLextern_C value \
caml_##klass##_##meth(value obj) { \
    c_type v = klass##_val(obj)->meth(); \
    return Val_##c_type(v); \
}

#define CALL_GETTER_ATTR(klass, attr, c_type, ml_type) \
CAMLextern_C value \
caml_##klass##_##attr(value obj) { \
    c_type v = klass##_val(obj)->attr; \
    return Val_##c_type(v); \
}

#define ML_CALL_GETTER(klass, meth, c_type, ml_type) \
external meth : t -> ml_type = quot(caml_##klass##_##meth)

#define ML_CALL_GETTER_ATTR(klass, attr, c_type, ml_type) \
external attr : t -> ml_type = quot(caml_##klass##_##attr)


#define CALL_GET_ATTR(klass, ml_f, attr, conv, ml_type) \
CAMLextern_C value \
caml_##klass##_##ml_f(value obj) { \
    return conv( klass##_val(obj)->attr ); \
}

#define ML_CALL_GET_ATTR(klass, ml_f, attr, conv, ml_type) \
external ml_f : t -> ml_type = quot(caml_##klass##_##ml_f)



// params and return

#define CALL_METH_RET0(klass, meth, ret_type, conv, ml_ret_type) \
CAMLextern_C value \
caml_##klass##_##meth(value obj) { \
    ret_type r = klass##_val(obj)->meth(); \
    return conv(r); \
}

#define CALL_METH_R0(klass, meth, ret_type, ml_ret_type) \
CAMLextern_C value \
caml_##klass##_##meth(value obj) { \
    ret_type r = klass##_val(obj)->meth(); \
    return Val_##ret_type(r); \
}

#define CALL_METH_R1(klass, meth, ret_type, ml_ret_type, conv, ml_type) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v) { \
    ret_type r = klass##_val(obj)->meth(conv(v)); \
    return Val_##ret_type(r); \
}

#define CALL_METH_R2(klass, meth, ret_type, ml_ret_type, c1, ml_t1, c2, ml_t2) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v1, value v2) { \
    ret_type r = klass##_val(obj)->meth(c1(v1), c2(v2)); \
    return Val_##ret_type(r); \
}

#define CALL_METH_R3(klass, meth, ret_type, ml_ret_type, c1, ml_t1, c2, ml_t2, c3, ml_t3) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v1, value v2, value v3) { \
    ret_type r = klass##_val(obj)->meth(c1(v1), c2(v2), c3(v3)); \
    return Val_##ret_type(r); \
}

#define CALL_METH_R4(klass, meth, ret_type, ml_ret_type, c1,ml_t1,c2,ml_t2,c3,ml_t3,c4,ml_t4) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v1, value v2, value v3, value v4) { \
    ret_type r = klass##_val(obj)->meth(c1(v1), c2(v2), c3(v3), c4(v4)); \
    return Val_##ret_type(r); \
}

#define CALL_METH_R5(klass, meth, ret_type, ml_ret_type, c1,ml_t1,c2,ml_t2,c3,ml_t3,c4,ml_t4,c5,ml_t5) \
CAMLextern_C value \
caml_##klass##_##meth(value obj, value v1, value v2, value v3, value v4, value v5) { \
    ret_type r = klass##_val(obj)->meth(c1(v1), c2(v2), c3(v3), c4(v4), c5(v5)); \
    return Val_##ret_type(r); \
}


#define ML_CALL_METH_R0(klass, meth, ret_type, ml_ret_type) \
external meth : t -> ml_ret_type \
  = quot(caml_##klass##_##meth)

#define ML_CALL_METH_R1(klass, meth, ret_type, ml_ret_type, conv, ml_type) \
external meth : t -> ml_type -> ml_ret_type \
  = quot(caml_##klass##_##meth)

#define ML_CALL_METH_R2(klass, meth, ret_type, ml_ret_type, c1, ml_t1, c2, ml_t2) \
external meth : t -> ml_t1 -> ml_t2 -> ml_ret_type \
  = quot(caml_##klass##_##meth)

#define ML_CALL_METH_R3(klass, meth, ret_type, ml_ret_type, c1, ml_t1, c2, ml_t2, c3, ml_t3) \
external meth : t -> ml_t1 -> ml_t2 -> ml_t3 -> ml_ret_type \
  = quot(caml_##klass##_##meth)

#define ML_CALL_METH_R4(klass, meth, ret_type, ml_ret_type, c1,ml_t1,c2,ml_t2,c3,ml_t3,c4,ml_t4) \
external meth : t -> ml_t1 -> ml_t2 -> ml_t3 -> ml_t4 -> ml_ret_type \
  = quot(caml_##klass##_##meth)

#define ML_CALL_METH_R5(klass, meth, ret_type, ml_ret_type, c1,ml_t1,c2,ml_t2,c3,ml_t3,c4,ml_t4,c5,ml_t5) \
external meth : t -> ml_t1 -> ml_t2 -> ml_t3 -> ml_t4 -> ml_t5 -> ml_ret_type \
  = quot(caml_##klass##_##meth##_bc) \
    quot(caml_##klass##_##meth)


// static methods

#define CALL_STATIC_METH0(klass, meth) \
CAMLextern_C value \
caml_##klass##_##meth(value unit) { \
    klass::meth(); \
    return Val_unit; \
}

#define CALL_STATIC_METH1(klass, meth, conv, ml_type) \
CAMLextern_C value \
caml_##klass##_##meth(value v) { \
    klass::meth(conv(v)); \
    return Val_unit; \
}

#define CALL_STATIC_METH2(klass, meth, conv1, ml_type1, conv2, ml_type2) \
CAMLextern_C value \
caml_##klass##_##meth(value v1, value v2) { \
    klass::meth(conv1(v1), conv2(v2)); \
    return Val_unit; \
}

#define CALL_STATIC_METH3(klass, meth, c1, ml_t1, c2, ml_t2, c3, ml_t3) \
CAMLextern_C value \
caml_##klass##_##meth(value v1, value v2, value v3) { \
    klass::meth(c1(v1), c2(v2), c3(v3)); \
    return Val_unit; \
}

#define CALL_STATIC_METH4(klass, meth, c1, ml_t1, c2, ml_t2, c3, ml_t3, c4, ml_t4) \
CAMLextern_C value \
caml_##klass##_##meth(value v1, value v2, value v3, value v4) { \
    klass::meth(c1(v1), c2(v2), c3(v3), c4(v4)); \
    return Val_unit; \
}

#define CALL_STATIC_METH5(klass, meth, c1, ml_t1, c2, ml_t2, c3, ml_t3, c4, ml_t4, c5, ml_t5) \
CAMLextern_C value \
caml_##klass##_##meth(value v1, value v2, value v3, value v4, value v5) { \
    klass::meth(c1(v1), c2(v2), c3(v3), c4(v4), c5(v5)); \
    return Val_unit; \
}

// ocaml code

#define ML_CALL_STATIC_METH1(klass, meth, conv, ml_type) \
external meth : ml_type -> unit \
  = quot(caml_##klass##_##meth) "noalloc"


// static methods with params and return

#define CALL_STATIC_METH_R0(klass, meth, ret_type, ml_ret_type) \
CAMLextern_C value \
caml_##klass##_##meth(value v) { \
    ret_type r = klass::meth(); \
    return Val_##ret_type(r); \
}

#define CALL_STATIC_METH_R1(klass, meth, ret_type, ml_ret_type, conv, ml_type) \
CAMLextern_C value \
caml_##klass##_##meth(value v) { \
    ret_type r = klass::meth(conv(v)); \
    return Val_##ret_type(r); \
}

#define CALL_STATIC_METH_R2(klass, meth, ret_type, ml_ret_type, c1, ml_t1, c2, ml_t2) \
CAMLextern_C value \
caml_##klass##_##meth(value v1, value v2) { \
    ret_type r = klass::meth(c1(v1), c2(v2)); \
    return Val_##ret_type(r); \
}

#define CALL_STATIC_METH_R3(klass, meth, ret_type, ml_ret_type, c1, ml_t1, c2, ml_t2, c3, ml_t3) \
CAMLextern_C value \
caml_##klass##_##meth(value v1, value v2, value v3) { \
    ret_type r = klass::meth(c1(v1), c2(v2), c3(v3)); \
    return Val_##ret_type(r); \
}

#define CALL_STATIC_METH_R4(klass, meth, ret_type, ml_ret_type, c1, ml_t1, c2, ml_t2, c3, ml_t3, c4, ml_t4) \
CAMLextern_C value \
caml_##klass##_##meth(value v1, value v2, value v3, value v4) { \
    ret_type r = klass::meth(c1(v1), c2(v2), c3(v3), c4(v4)); \
    return Val_##ret_type(r); \
}

#define CALL_STATIC_METH_R5(klass,meth,ret_type,ml_ret_type,c1,ml_t1,c2,ml_t2,c3,ml_t3,c4,ml_t4,c5,ml_t5) \
CAMLextern_C value \
caml_##klass##_##meth(value v1, value v2, value v3, value v4, value v5) { \
    ret_type r = klass::meth(c1(v1), c2(v2), c3(v3), c4(v4), c5(v5)); \
    return Val_##ret_type(r); \
}


#define ML_CALL_STATIC_METH_R0(klass,meth,ret_type,ml_ret_type) \
external meth : unit -> ml_ret_type \
  = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_STATIC_METH_R1(klass,meth,ret_type,ml_ret_type,conv,ml_type) \
external meth : ml_type -> ml_ret_type \
  = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_STATIC_METH_R2(klass,meth,ret_type,ml_ret_type,c1,ml_t1,c2,ml_t2) \
external meth : ml_t1 -> ml_t2 -> ml_ret_type \
  = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_STATIC_METH_R3(klass,meth,ret_type,ml_ret_type,c1,ml_t1,c2,ml_t2,c3,ml_t3) \
external meth : ml_t1 -> ml_t2 -> ml_t3 -> ml_ret_type \
  = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_STATIC_METH_R4(klass,meth,ret_type,ml_ret_type,c1,ml_t1,c2,ml_t2,c3,ml_t3,c4,ml_t4) \
external meth : ml_t1 -> ml_t2 -> ml_t3 -> ml_t4 -> ml_ret_type \
  = quot(caml_##klass##_##meth) "noalloc"

#define ML_CALL_STATIC_METH_R5(klass,meth,ret_type,ml_ret_type,c1,ml_t1,c2,ml_t2,c3,ml_t3,c4,ml_t4,c5,ml_t5) \
external meth : ml_t1 -> ml_t2 -> ml_t3 -> ml_t4 -> ml_t5 -> ml_ret_type \
  = quot(caml_##klass##_##meth) "noalloc"


// not

#define CALL_METH_NOT(klass, meth, ml_meth) \
CAMLextern_C value \
caml_##klass##_##ml_meth(value obj) { \
    klass##_val(obj)->meth(false); \
    return Val_unit; \
}

#define ML_CALL_METH_NOT(klass, meth, ml_meth) \
external ml_meth : t -> unit = quot(caml_##klass##_##ml_meth) "noalloc"


#endif // _CL_GEN_MACRO_INC

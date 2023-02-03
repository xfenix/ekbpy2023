#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native_mypyc_.h"
#include "__native_internal_mypyc_.h"
static PyMethodDef module_methods[] = {
    {"run_example", (PyCFunction)CPyPy_run_example, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "ekbpy.mypyc_",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyObject *CPyInit_ekbpy___mypyc_(void)
{
    PyObject* modname = NULL;
    if (CPyModule_ekbpy___mypyc__internal) {
        Py_INCREF(CPyModule_ekbpy___mypyc__internal);
        return CPyModule_ekbpy___mypyc__internal;
    }
    CPyModule_ekbpy___mypyc__internal = PyModule_Create(&module);
    if (unlikely(CPyModule_ekbpy___mypyc__internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_ekbpy___mypyc__internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_ekbpy___mypyc__internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_ekbpy___mypyc__internal;
    fail:
    Py_CLEAR(CPyModule_ekbpy___mypyc__internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_run_example(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_output_buf;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_one_number;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
CPyL0: ;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "run_example", 5, CPyStatic_globals);
        goto CPyL11;
    }
CPyL1: ;
    cpy_r_output_buf = cpy_r_r0;
    cpy_r_r1 = CPyModule__base;
    cpy_r_r2 = CPyStatics[3]; /* 'INPUT_VALUES' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "run_example", 6, CPyStatic_globals);
        goto CPyL12;
    }
CPyL2: ;
    if (likely(PyRange_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("range", cpy_r_r3); cpy_r_r4 = NULL;
    }
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "run_example", 6, CPyStatic_globals);
        goto CPyL12;
    }
CPyL3: ;
    cpy_r_r5 = PyObject_GetIter(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "run_example", 6, CPyStatic_globals);
        goto CPyL12;
    }
CPyL4: ;
    cpy_r_r6 = PyIter_Next(cpy_r_r5);
    if (cpy_r_r6 == NULL) goto CPyL13;
CPyL5: ;
    if (likely(PyLong_Check(cpy_r_r6)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r6);
    else {
        CPy_TypeError("int", cpy_r_r6); cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc_.py", "run_example", 6, CPyStatic_globals);
        goto CPyL14;
    }
CPyL6: ;
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    cpy_r_one_number = cpy_r_r8;
    cpy_r_r9 = PyNumber_Multiply(cpy_r_one_number, cpy_r_one_number);
    CPy_DECREF(cpy_r_one_number);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "run_example", 7, CPyStatic_globals);
        goto CPyL14;
    }
CPyL7: ;
    cpy_r_r10 = CPyStatics[4]; /* 'append' */
    PyObject *cpy_r_r11[2] = {cpy_r_output_buf, cpy_r_r9};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "run_example", 7, CPyStatic_globals);
        goto CPyL15;
    } else
        goto CPyL16;
CPyL8: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL4;
CPyL9: ;
    cpy_r_r14 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc_.py", "run_example", 6, CPyStatic_globals);
        goto CPyL12;
    }
CPyL10: ;
    return cpy_r_output_buf;
CPyL11: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL12: ;
    CPy_DecRef(cpy_r_output_buf);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_output_buf);
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_output_buf);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL11;
CPyL16: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
}

PyObject *CPyPy_run_example(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":run_example", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_run_example();
    return retval;
fail: ;
    CPy_AddTraceback("mypyc_.py", "run_example", 4, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
CPyL0: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
CPyL1: ;
    cpy_r_r3 = CPyStatics[5]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "<module>", -1, CPyStatic_globals);
        goto CPyL17;
    }
CPyL2: ;
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatic_globals;
    cpy_r_r6 = CPyModule__base;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (cpy_r_r8) goto CPyL6;
CPyL4: ;
    cpy_r_r9 = CPyStatics[6]; /* '_base' */
    cpy_r_r10 = PyImport_Import(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "<module>", 1, CPyStatic_globals);
        goto CPyL17;
    }
CPyL5: ;
    CPyModule__base = cpy_r_r10;
    CPy_INCREF(CPyModule__base);
    CPy_DECREF(cpy_r_r10);
CPyL6: ;
    cpy_r_r11 = PyImport_GetModuleDict();
    cpy_r_r12 = CPyStatics[6]; /* '_base' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "<module>", 1, CPyStatic_globals);
        goto CPyL17;
    }
CPyL7: ;
    cpy_r_r14 = CPyStatics[6]; /* '_base' */
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r5, cpy_r_r14, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc_.py", "<module>", 1, CPyStatic_globals);
        goto CPyL17;
    }
CPyL8: ;
    cpy_r_r17 = CPyStatic_globals;
    cpy_r_r18 = CPyStatics[7]; /* '__name__' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "<module>", 11, CPyStatic_globals);
        goto CPyL17;
    }
CPyL9: ;
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeError("str", cpy_r_r19); cpy_r_r20 = NULL;
    }
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "<module>", 11, CPyStatic_globals);
        goto CPyL17;
    }
CPyL10: ;
    cpy_r_r21 = CPyStatics[8]; /* '__main__' */
    cpy_r_r22 = PyUnicode_Compare(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 == -1;
    if (!cpy_r_r23) goto CPyL13;
CPyL11: ;
    cpy_r_r24 = PyErr_Occurred();
    cpy_r_r25 = cpy_r_r24 != NULL;
    if (!cpy_r_r25) goto CPyL13;
CPyL12: ;
    cpy_r_r26 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc_.py", "<module>", 11, CPyStatic_globals);
        goto CPyL17;
    }
CPyL13: ;
    cpy_r_r27 = cpy_r_r22 == 0;
    if (!cpy_r_r27) goto CPyL16;
CPyL14: ;
    cpy_r_r28 = CPyModule__base;
    cpy_r_r29 = CPyStatics[9]; /* 'run_timeit' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "<module>", 12, CPyStatic_globals);
        goto CPyL17;
    }
CPyL15: ;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r30, 0, 0, 0);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc_.py", "<module>", 12, CPyStatic_globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL18: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL16;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_ekbpy___mypyc_ = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule__base = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[10];
const char * const CPyLit_Str[] = {
    "\a\fINPUT_VALUES\006append\bbuiltins\005_base\b__name__\b__main__\nrun_timeit",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {0};
CPyModule *CPyModule_ekbpy___mypyc__internal = NULL;
CPyModule *CPyModule_ekbpy___mypyc_;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins_internal = NULL;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule__base_internal = NULL;
CPyModule *CPyModule__base;
PyObject *CPyDef_run_example(void);
PyObject *CPyPy_run_example(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);

static struct export_table_ekbpy___mypyc_ exports = {
    &CPyDef_run_example,
    &CPyDef___top_level__,
};

PyMODINIT_FUNC PyInit_mypyc___mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "ekbpy.mypyc___mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "ekbpy.mypyc___mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_ekbpy___mypyc_(void);
    capsule = PyCapsule_New((void *)CPyInit_ekbpy___mypyc_, "ekbpy.mypyc___mypyc.init_ekbpy___mypyc_", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_ekbpy___mypyc_", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}

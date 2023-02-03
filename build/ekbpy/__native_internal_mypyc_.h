#ifndef MYPYC_NATIVE_INTERNAL_ekbpy___mypyc__H
#define MYPYC_NATIVE_INTERNAL_ekbpy___mypyc__H
#include <Python.h>
#include <CPy.h>
#include "__native_mypyc_.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[10];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern CPyModule *CPyModule_ekbpy___mypyc__internal;
extern CPyModule *CPyModule_ekbpy___mypyc_;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins_internal;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule__base_internal;
extern CPyModule *CPyModule__base;
extern PyObject *CPyDef_run_example(void);
extern PyObject *CPyPy_run_example(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif

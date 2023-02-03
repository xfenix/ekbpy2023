#ifndef MYPYC_NATIVE_ekbpy___mypyc_H
#define MYPYC_NATIVE_ekbpy___mypyc_H
#include <Python.h>
#include <CPy.h>

struct export_table_ekbpy___mypyc {
    PyObject *(*CPyDef_run_example)(void);
    char (*CPyDef___top_level__)(void);
};
#endif

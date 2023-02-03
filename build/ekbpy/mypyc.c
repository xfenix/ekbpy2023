#include <Python.h>

PyMODINIT_FUNC
PyInit_mypyc(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("ekbpy.mypyc__mypyc"))) return NULL;
    Py_DECREF(tmp);
    void *init_func = PyCapsule_Import("ekbpy.mypyc__mypyc.init_ekbpy___mypyc", 0);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_mypyc(); }

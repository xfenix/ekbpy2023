#include <Python.h>

PyMODINIT_FUNC
PyInit_mypyc_(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("ekbpy.mypyc___mypyc"))) return NULL;
    Py_DECREF(tmp);
    void *init_func = PyCapsule_Import("ekbpy.mypyc___mypyc.init_ekbpy___mypyc_", 0);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_mypyc_(); }

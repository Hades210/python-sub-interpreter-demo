#include "stdio.h"
#include "Python.h"

int main()
{
    Py_Initialize();
    PyThreadState *tstate_enter = PyThreadState_Get();
    PyThreadState *tstate = Py_NewInterpreter();

    PyRun_SimpleString("import mod\n");
    if (PyErr_Occurred()) {
        PyErr_Print();
    }
    Py_EndInterpreter(tstate);
    PyThreadState_Swap(tstate_enter);
    printf("about to finalize\n");
    Py_Finalize();
    printf("done\n");

    return 0;
}

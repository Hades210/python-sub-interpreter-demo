#include "stdio.h"
#include "Python.h"

int main()
{
    Py_Initialize();
    PyThreadState *tstate_enter = PyThreadState_Get();
    PyThreadState *tstate = Py_NewInterpreter();

    PyRun_SimpleString("import sys\n"
            "sys.path[0:0] = ['/Users/emptysquare/.virtualenvs/official/mongo-python-driver/build/lib.macosx-10.4-x86_64-3.2']\n"
            "import python_747_mod\n"
            "python_747_mod.f()\n");
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

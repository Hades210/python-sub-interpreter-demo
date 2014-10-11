cmake_minimum_required(VERSION 2.8.4)
project(py_interp)

set(SOURCE_FILES main.c)
add_executable(py_interp ${SOURCE_FILES})

FIND_PACKAGE(PythonLibs REQUIRED)
TARGET_LINK_LIBRARIES(py_interp ${PYTHON_LIBRARIES})

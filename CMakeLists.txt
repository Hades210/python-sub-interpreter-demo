cmake_minimum_required(VERSION 2.8.4)
project(py_interp)

include_directories("/Users/emptysquare/Downloads/Python-3.2.5/Include")
include_directories("/Users/emptysquare/Downloads/Python-3.2.5/")

set(SOURCE_FILES main.c)
add_executable(py_interp ${SOURCE_FILES})


set(PYTHON_INCLUDE_DIR /Users/emptysquare/Downloads/Python-3.2.5/Include)
set(PYTHON_LIBRARY /Users/emptysquare/Downloads/Python-3.2.5/libpython3.2m.dylib)
FIND_PACKAGE(PythonLibs REQUIRED)
TARGET_LINK_LIBRARIES(py_interp ${PYTHON_LIBRARIES})

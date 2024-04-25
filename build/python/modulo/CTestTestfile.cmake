# CMake generated Testfile for 
# Source directory: /home/benjamin/GNU_learning/gr-modulo/python/modulo
# Build directory: /home/benjamin/GNU_learning/gr-modulo/build/python/modulo
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(qa_modulo_operator "/usr/bin/sh" "qa_modulo_operator_test.sh")
set_tests_properties(qa_modulo_operator PROPERTIES  _BACKTRACE_TRIPLES "/usr/lib/x86_64-linux-gnu/cmake/gnuradio/GrTest.cmake;119;add_test;/home/benjamin/GNU_learning/gr-modulo/python/modulo/CMakeLists.txt;42;GR_ADD_TEST;/home/benjamin/GNU_learning/gr-modulo/python/modulo/CMakeLists.txt;0;")
subdirs("bindings")

#!/usr/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/benjamin/GNU_learning/gr-modulo/lib
export GR_CONF_CONTROLPORT_ON=False
export PATH="/home/benjamin/GNU_learning/gr-modulo/build/lib":"$PATH"
export LD_LIBRARY_PATH="":$LD_LIBRARY_PATH
export PYTHONPATH=/home/benjamin/GNU_learning/gr-modulo/build/test_modules:$PYTHONPATH
modulo_qa_modulo_operator.cc 

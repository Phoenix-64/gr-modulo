#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# Copyright 2024 Benjamin Pionczewski.
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

from gnuradio import gr, gr_unittest
from numpy import array, testing
from gnuradio import blocks
# from gnuradio import blocks
try:
    from gnuradio.modulo import modulo_operator
except ImportError:
    import os
    import sys
    dirname, filename = os.path.split(os.path.abspath(__file__))
    sys.path.append(os.path.join(dirname, "bindings"))
    from gnuradio.modulo import modulo_operator

class qa_modulo_operator(gr_unittest.TestCase):

    def setUp(self):
        self.tb = gr.top_block()

    def tearDown(self):
        self.tb = None

    def test_instance(self):
        # FIXME: Test will fail until you pass sensible arguments to the constructor
        instance = modulo_operator(10)

    def test_001_descriptive_test_name(self):
        # set up fg
        self.tb.run()
        # check data
        modulos = 4.0
        src_data = array([1.3, 2.1, 4.5, 63.3], dtype="float32")
        expected_result = array([1.2999999523162842, 2.0999999046325684, 0.5, 3.299999237060547], dtype="float32")

        src = blocks.vector_source_f(src_data)
        modulo_operators = modulo_operator(modulos)
        dst = blocks.vector_sink_f()
        self.tb.connect(src,modulo_operators)
        self.tb.connect(modulo_operators,dst)
        # set up fg
        self.tb.run()
        # check data
        result_data = dst.data()
        print(result_data)
        testing.assert_equal(expected_result, result_data)
        self.assertEqual(len(expected_result), len(result_data))


if __name__ == '__main__':
    gr_unittest.run(qa_modulo_operator)

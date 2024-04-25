/* -*- c++ -*- */
/*
 * Copyright 2024 Benjamin Pionczewski.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MODULO_MODULO_OPERATOR_IMPL_H
#define INCLUDED_MODULO_MODULO_OPERATOR_IMPL_H

#include <gnuradio/modulo/modulo_operator.h>

namespace gr {
namespace modulo {

class modulo_operator_impl : public modulo_operator
{
private:
      float _modulo;

public:
    modulo_operator_impl(float modulo);
    ~modulo_operator_impl();

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} // namespace modulo
} // namespace gr

#endif /* INCLUDED_MODULO_MODULO_OPERATOR_IMPL_H */

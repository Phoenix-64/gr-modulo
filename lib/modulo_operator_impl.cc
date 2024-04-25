/* -*- c++ -*- */
/*
 * Copyright 2024 Benjamin Pionczewski.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "modulo_operator_impl.h"
#include <gnuradio/io_signature.h>
#include <math.h>

namespace gr {
namespace modulo {

using input_type = float;
using output_type = float;
modulo_operator::sptr modulo_operator::make(float modulo)
{
    return gnuradio::make_block_sptr<modulo_operator_impl>(modulo);
}


/*
 * The private constructor
 */
modulo_operator_impl::modulo_operator_impl(float modulo)
    : gr::sync_block("modulo_operator",
                     gr::io_signature::make(
                         1 /* min inputs */, 1 /* max inputs */, sizeof(input_type)),
                     gr::io_signature::make(
                         1 /* min outputs */, 1 /*max outputs */, sizeof(output_type)))
                        
{
    _modulo = modulo;
}

/*
 * Our virtual destructor.
 */
modulo_operator_impl::~modulo_operator_impl() {}

int modulo_operator_impl::work(int noutput_items,
                               gr_vector_const_void_star& input_items,
                               gr_vector_void_star& output_items)
{
    auto in = static_cast<const input_type*>(input_items[0]);
    auto out = static_cast<output_type*>(output_items[0]);

        for(int i = 0; i < noutput_items; i++)
    {
            // ML decoder, determine the minimum distance from all constellation points

            out[i] = fmodf(in[i], _modulo);
    }
    // Tell runtime system how many output items we produced.
    return noutput_items;
}

} /* namespace modulo */
} /* namespace gr */

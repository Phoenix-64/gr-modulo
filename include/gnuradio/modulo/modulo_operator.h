/* -*- c++ -*- */
/*
 * Copyright 2024 Benjamin Pionczewski.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MODULO_MODULO_OPERATOR_H
#define INCLUDED_MODULO_MODULO_OPERATOR_H

#include <gnuradio/modulo/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
namespace modulo {

/*!
 * \brief <+description of block+>
 * \ingroup modulo
 *
 */
class MODULO_API modulo_operator : virtual public gr::sync_block
{
public:
    typedef std::shared_ptr<modulo_operator> sptr;

    /*!
     * \brief Return a shared_ptr to a new instance of modulo::modulo_operator.
     *
     * To avoid accidental use of raw pointers, modulo::modulo_operator's
     * constructor is in a private implementation
     * class. modulo::modulo_operator::make is the public interface for
     * creating new instances.
     */
    static sptr make(float modulo = 10);
};

} // namespace modulo
} // namespace gr

#endif /* INCLUDED_MODULO_MODULO_OPERATOR_H */

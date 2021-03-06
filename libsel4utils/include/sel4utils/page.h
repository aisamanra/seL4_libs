/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#ifndef _SEL4UTILS_PAGE_H_
#define _SEL4UTILS_PAGE_H_

#include <vspace/page.h>
#include <utils/arith.h>

#define UTILS_NUM_PAGE_SIZES SEL4_NUM_PAGE_SIZES

static inline DEPRECATED("Use sel4_valid_size_bits") bool
utils_valid_size_bits(size_t size_bits)
{
    return sel4_valid_size_bits(size_bits);
}

#endif /* _SEL4UTILS_PAGE_H_ */

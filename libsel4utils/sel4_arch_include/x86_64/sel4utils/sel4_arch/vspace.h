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

#ifndef SEL4UTILS_SEL4_ARCH_VSPACE_H
#define SEL4UTILS_SEL4_ARCH_VSPACE_H

#include <autoconf.h>

#define KERNEL_RESERVED_START 0xffffff8000000000
#define VSPACE_MAP_PAGING_OBJECTS 5

#define VSPACE_LEVEL_BITS 9
#define VSPACE_NUM_LEVELS 4

#endif /* SEL4UTILS_SEL4_ARCH_VSPACE_H */

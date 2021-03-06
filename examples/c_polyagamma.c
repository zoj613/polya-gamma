/*
 * Copyright (c) 2020-2021, Zolisa Bleki
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * This module shows an examples of how to use polyagamma in a C program.
 * Here we use a custom bitgenerator called Xoroshiro128plus. Numpy's
 * bitgenerator struct requires defining function pointers for generating
 * integers and standard uniform numbers. We define these functions alongside the
 * bitgenerator.
 *
 * The Xoroshiro128p code is derived from the bitgenerator author's original
 * code found at: https://xorshift.di.unimi.it/xoroshiro128plus.c
 *
 * This example can be compiled with:
 *
 * gcc examples/c_polyagamma.c src/*.c -I./include -I$(python -c "import numpy; print(numpy.get_include())") \
 *  -I/usr/include/python3.9 -L$(python -c "import numpy; print(numpy.get_include())")/../../random/lib \
 *  -lm -lnpyrandom -O2 -march=native -std=c99
 */
#include "../include/pgm_random.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct {uint64_t s[2]; uint32_t s2[4];} xrs128p_random_t;


static inline uint64_t
rotl(const uint64_t x, int k)
{
    return (x << k) | (x >> (64 - k));
}


static inline uint32_t
rotl32(const uint32_t x, int k)
{
	return (x << k) | (x >> (32 - k));
}


static inline uint64_t
xrs128p_next64(void* rng)
{
    xrs128p_random_t* xrs = rng;
    const uint64_t s0 = xrs->s[0];
    uint64_t s1 = xrs->s[1];
    const uint64_t result = s0 + s1;

    s1 ^= s0;
    xrs->s[0] = rotl(s0, 24) ^ s1 ^ (s1 << 16); // a, b
    xrs->s[1] = rotl(s1, 37); // c

    return result;
}


static inline uint32_t
xrs128p_next32(void* rng)
{
    xrs128p_random_t* xrs = rng;
    const uint32_t result = xrs->s2[0] + xrs->s2[3];
    const uint32_t t = xrs->s2[1] << 9;

    xrs->s2[2] ^= xrs->s2[0];
    xrs->s2[3] ^= xrs->s2[1];
    xrs->s2[1] ^= xrs->s2[2];
    xrs->s2[0] ^= xrs->s2[3];

    xrs->s2[2] ^= t;

    xrs->s2[3] = rotl32(xrs->s2[3], 11);

    return result;
}


static inline double
xrs128p_next_double(void* rng)
{
    xrs128p_random_t* xrs = rng;
    return (xrs128p_next64(xrs) >> 11) * (1.0 / 9007199254740992.0);
}

/*
 * Generate 100 samples from a PG(10.5, 1.5) distribution using the alternate
 * method.
 */
int
main(void)
{
    size_t n = 100;
    double* out = malloc(n * sizeof(*out));
    // setup the bitgen with a specified seed
    xrs128p_random_t xrs = {
        .s = {12132233, 1959324}, .s2 = {25343, 98549, 78230, 91821}
    };
    bitgen_t bitgen = {
        .state = &xrs,
        .next_double = xrs128p_next_double,
        .next_uint64 = xrs128p_next64,
        .next_uint32 = xrs128p_next32
    };
    pgm_random_polyagamma_fill(&bitgen, 10.5, 1.5, ALTERNATE, n, out);

    puts("Samples: [ ");
    for (size_t i = 0; i < n; i++)
       printf("%lf ", out[i]);
    puts("]");
    free(out);
}

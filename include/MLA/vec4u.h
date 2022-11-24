#ifndef _vec4i_h_
#define _vec4i_h_

#include <stdint.h>

typedef struct {
	uint32_t x, y, z, w;
} vec4u;

static inline vec4u mla_vec4u(uint32_t x, uint32_t y, uint32_t z, uint32_t w)
{
	return (vec4u) {x, y, z, w};
}

static inline uint32_t mla_vec4u_dot(vec4u *a, vec4u *b)
{
	return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}

#endif // _vec4i_h_

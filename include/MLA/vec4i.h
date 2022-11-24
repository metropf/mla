#ifndef _vec4i_h_
#define _vec4i_h_

#include <stdint.h>

typedef struct {
	int32_t x, y, z, w;
} vec4i;

static inline vec4i mla_vec4i(int32_t x, int32_t y, int32_t z, int32_t w)
{
	return (vec4i) {x, y, z, w};
}

static inline int32_t mla_vec4i_dot(vec4i *a, vec4i *b)
{
	return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}

#endif // _vec4i_h_

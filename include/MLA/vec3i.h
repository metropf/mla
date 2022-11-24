#ifndef _vec3i_h_
#define _vec3i_h_

#include <stdint.h>

typedef struct {
	int32_t x, y, z;
} vec3i;

static inline vec3i mla_vec3i(int32_t x, int32_t y, int32_t z)
{
	return (vec3i) {x, y, z};
}

static inline int32_t mla_vec3i_dot(vec3i *a, vec3i *b)
{
	return a->x * b->x + a->y * b->y + a->z * b->z;
}

#endif // _vec3i_h_

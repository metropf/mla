#ifndef _vec3u_h_
#define _vec3u_h_

#include <stdint.h>

typedef struct {
	uint32_t x, y, z;
} vec3u;

static inline vec3u mla_vec3u(uint32_t x, uint32_t y, uint32_t z)
{
	return (vec3u) {x, y, z};
}

static inline uint32_t mla_vec3u_dot(vec3u *a, vec3u *b)
{
	return a->x * b->x + a->y * b->y + a->z * b->z;
}

#endif // _vec3u_h_

#ifndef _vec2u_h_
#define _vec2u_h_

#include <stdint.h>

typedef struct {
	uint32_t x, y;
} vec2u;

static inline vec2u mla_vec2u(uint32_t x, uint32_t y)
{
	return (vec2u) {x, y};
}

static inline uint32_t mla_vec2u_dot(vec2u *a, vec2u *b)
{
	return a->x * b->x - a->y * b->y;
}

#endif // _vec2u_h_

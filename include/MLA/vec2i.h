#ifndef _vec2i_h_
#define _vec2i_h_

#include <stdint.h>

typedef struct {
	int32_t x, y;
} vec2i;

static inline vec2i mla_vec2i(int32_t x, int32_t y)
{
	return (vec2i) {x, y};
}

static inline int32_t mla_vec2i_dot(vec2i *a, vec2i *b)
{
	return a->x * b->x + a->y * b->y;
}

#endif // _vec2i_h_

#ifndef _vec2f_h_
#define _vec2f_h_

#include <stdint.h>

typedef struct {
	float x, y;
} vec2f;

static inline vec2f mla_vec2f(float x, float y)
{
	return (vec2f) {x, y};
}

static inline float mla_vec2f_dot(vec2f *a, vec2f *b)
{
	return a->x * b->x + a->y * b->y;
}

#endif // _vec2f_h_

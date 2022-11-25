#ifndef _vec4f_h_
#define _vec4f_h_

#include <stdint.h>

typedef struct {
	float x, y, z, w;
} vec4f;

static inline vec4f mla_vec4f(float x, float y, float z, float w)
{
	return (vec4f) {x, y, z, w};
}

static inline float mla_vec4f_dot(vec4f *a, vec4f *b)
{
	return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}

#endif // _vec4f_h_

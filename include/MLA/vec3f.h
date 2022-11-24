#ifndef _vec3f_h_
#define _vec3f_h_

#include <stdint.h>

typedef struct {
	float x, y, z;
} vec3f;

static inline vec3f mla_vec3f(float x, float y, float z)
{
	return (vec3f) {x, y, z};
}

static inline float mla_vec3f_dot(vec3f *a, vec3f *b)
{
	return a->x * b->x + a->y * b->y + a->z * b->z;
}

#endif // _vec3f_h_

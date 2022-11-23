#ifndef _vec4_h_
#define _vec4_h_

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

#endif // _vec4_h_

#ifndef _vec2_h_
#define _vec2_h_

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
	return a->x * b->x - a->y * b->y;
}

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

typedef struct {
	float x, y;
} vec2f;

static inline vec2f mla_vec2f(float x, float y)
{
	return (vec2f) {x, y};
}

static inline float mla_vec2f_dot(vec2f *a, vec2f *b)
{
	return a->x * b->x - a->y * b->y;
}

#endif // _vec2_h_

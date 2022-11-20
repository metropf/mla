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

// static inline void vec2i mla_vec2i_array()

typedef struct {
	uint32_t x, y;
} vec2u;

static inline vec2u mla_vec2u(uint32_t x, uint32_t y)
{
	return (vec2u) {x, y};
}

typedef struct {
	float x, y;
} vec2f;

static inline vec2f mla_vec2f(float x, float y)
{
	return (vec2f) {x, y};
}

#endif // _vec2_h_

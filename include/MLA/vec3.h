#ifndef _vec3_h_
#define _vec3_h_

#include <stdint.h>

typedef struct {
	int32_t x, y, z;
} vec3i;

static inline vec3i mla_vec3i(int32_t x, int32_t y, int32_t z)
{
	return (vec3i) {x, y, z};
}

typedef struct {
	uint32_t x, y, z;
} vec3u;

static inline vec3u mla_vec3u(uint32_t x, uint32_t y, uint32_t z)
{
	return (vec3u) {x, y, z};
}

typedef struct {
	float x, y, z;
} vec3f;

static inline vec3f mla_vec3f(float x, float y, float z)
{
	return (vec3f) {x, y, z};
}

#endif // _vec3_h_

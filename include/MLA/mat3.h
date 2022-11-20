#ifndef _mat3_h_
#define _mat3_h_

#include "vec3.h"

typedef struct {
	vec3i x, y, z;
} mat3i;

static inline mat3i mla_mat3i_init(void)
{
	return (mat3i) {{1, 0, 0},
			        {0, 1, 0},
					{0, 0, 1}};
}

static inline void mla_mat3i_array(mat3i *src, int32_t dest[3][3])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;
	dest[0][2] = src->x.z;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
	dest[1][2] = src->y.z;

	dest[2][0] = src->z.x;
	dest[2][1] = src->z.y;
	dest[2][2] = src->z.z;
}

typedef struct {
	vec3u x, y, z;
} mat3u;

static inline mat3u mla_mat3u_init(void)
{
	return (mat3u) {{1, 0, 0},
			        {0, 1, 0},
					{0, 0, 1}};
}

static inline void mla_mat3u_array(mat3u *src, uint32_t dest[3][3])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;
	dest[0][2] = src->x.z;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
	dest[1][2] = src->y.z;

	dest[2][0] = src->z.x;
	dest[2][1] = src->z.y;
	dest[2][2] = src->z.z;
}

typedef struct {
	vec3f x, y, z;
} mat3f;

static inline mat3f mla_mat3f_init(void)
{
	return (mat3f) {{1.0f, 0.0f, 0.0f},
			        {0.0f, 1.0f, 0.0f},
					{0.0f, 0.0f, 1.0f}};
}

static inline void mla_mat3f_array(mat3f *src, float dest[3][3])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;
	dest[0][2] = src->x.z;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
	dest[1][2] = src->y.z;

	dest[2][0] = src->z.x;
	dest[2][1] = src->z.y;
	dest[2][2] = src->z.z;
}

#endif // _mat3_h_

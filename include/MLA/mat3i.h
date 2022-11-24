#ifndef _mat3i_h_
#define _mat3i_h_

#include "vec3i.h"

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

static inline mat3i mla_mat3i_mul(mat3i *a, mat3i *b)
{
	return (mat3i) {{a->x.x * b->x.x + a->x.y * b->y.x + a->x.z * b->z.x, a->x.x * b->x.y + a->x.y * b->y.y + a->x.z * b->z.y, a->x.x * b->x.z + a->x.y * b->y.z + a->x.z * b->z.z},
					{a->y.x * b->x.x + a->y.y * b->y.x + a->y.z * b->z.x, a->y.x * b->x.y + a->y.y * b->y.y + a->y.z * b->z.y, a->y.x * b->x.z + a->y.y * b->y.z + a->y.z * b->z.z},
					{a->z.x * b->x.x + a->z.y * b->y.x + a->z.z * b->z.x, a->z.x * b->x.y + a->z.y * b->y.y + a->z.z * b->z.y, a->z.x * b->x.z + a->z.y * b->y.z + a->z.z * b->z.z}};
}

#endif // _mat3i_h_

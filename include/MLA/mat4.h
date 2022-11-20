#ifndef _mat4_h_
#define _mat4_h_

#include "vec4.h"

typedef struct {
	vec4i x, y, z, w;
} mat4i;

static inline mat4i mla_mat4i_init(void)
{
	return (mat4i) {{1, 0, 0, 0},
			        {0, 1, 0, 0},
					{0, 0, 1, 0},
					{0, 0, 0, 1}};
}

static inline void mla_mat4i_array(mat4i *src, int32_t dest[4][4])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;
	dest[0][2] = src->x.z;
	dest[0][3] = src->x.w;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
	dest[1][2] = src->y.z;
	dest[1][3] = src->y.w;

	dest[2][0] = src->z.x;
	dest[2][1] = src->z.y;
	dest[2][2] = src->z.z;
	dest[2][3] = src->z.w;

	dest[3][0] = src->w.x;
	dest[3][1] = src->w.y;
	dest[3][2] = src->w.z;
	dest[3][3] = src->w.w;
}

typedef struct {
	vec4u x, y, z, w;
} mat4u;

static inline mat4u mla_mat4u_init(void)
{
	return (mat4u) {{1, 0, 0, 0},
			        {0, 1, 0, 0},
					{0, 0, 1, 0},
					{0, 0, 0, 1}};
}

static inline void mla_mat4u_array(mat4u *src, uint32_t dest[4][4])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;
	dest[0][2] = src->x.z;
	dest[0][3] = src->x.w;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
	dest[1][2] = src->y.z;
	dest[1][3] = src->y.w;

	dest[2][0] = src->z.x;
	dest[2][1] = src->z.y;
	dest[2][2] = src->z.z;
	dest[2][3] = src->z.w;

	dest[3][0] = src->w.x;
	dest[3][1] = src->w.y;
	dest[3][2] = src->w.z;
	dest[3][3] = src->w.w;
}

typedef struct {
	vec4f x, y, z, w;
} mat4f;

static inline mat4f mla_mat4f_init(void)
{
	return (mat4f) {{1.0f, 0.0f, 0.0f, 0.0f},
			        {0.0f, 1.0f, 0.0f, 0.0f},
					{0.0f, 0.0f, 1.0f, 0.0f},
					{0.0f, 0.0f, 0.0f, 1.0f}};
}

static inline void mla_mat4f_array(mat4f *src, float dest[4][4])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;
	dest[0][2] = src->x.z;
	dest[0][3] = src->x.w;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
	dest[1][2] = src->y.z;
	dest[1][3] = src->y.w;

	dest[2][0] = src->z.x;
	dest[2][1] = src->z.y;
	dest[2][2] = src->z.z;
	dest[2][3] = src->z.w;

	dest[3][0] = src->w.x;
	dest[3][1] = src->w.y;
	dest[3][2] = src->w.z;
	dest[3][3] = src->w.w;
}

#endif // _mat4_h_

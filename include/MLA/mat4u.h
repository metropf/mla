#ifndef _mat4u_h_
#define _mat4u_h_

#include "vec4u.h"

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

static inline mat4u mla_mat4u_mul(mat4u *a, mat4u *b)
{
	return (mat4u) {{a->x.x * b->x.x + a->x.y * b->y.x + a->x.z * b->z.x + a->x.w * b->w.x, a->x.x * b->x.y + a->x.y * b->y.y + a->x.z * b->z.y + a->x.w * b->w.y, a->x.x * b->x.z + a->x.y * b->y.z + a->x.z * b->z.z + a->x.w * b->w.z, a->x.x * b->x.w + a->x.w * b->y.w + a->x.z * b->z.w + a->x.w * b->w.w},
					{a->y.x * b->x.x + a->y.y * b->y.x + a->y.z * b->z.x + a->y.w * b->w.x, a->y.y * b->x.y + a->y.y * b->y.y + a->y.z * b->z.y + a->y.w * b->w.y, a->y.x * b->x.z + a->y.y * b->y.z + a->y.z * b->z.z + a->y.w * b->w.z, a->y.x * b->x.w + a->y.w * b->y.w + a->y.z * b->z.w + a->y.w * b->w.w},
					{a->z.x * b->x.x + a->z.y * b->y.x + a->z.z * b->z.x + a->z.w * b->w.x, a->z.z * b->x.y + a->z.z * b->y.y + a->z.z * b->z.y + a->z.w * b->w.y, a->z.x * b->x.z + a->z.y * b->y.z + a->z.z * b->z.z + a->z.w * b->w.z, a->z.x * b->x.w + a->z.w * b->y.w + a->z.z * b->z.w + a->z.w * b->w.w},
					{a->w.x * b->x.x + a->w.y * b->y.x + a->w.z * b->z.x + a->w.w * b->w.x, a->w.w * b->x.y + a->w.w * b->y.y + a->w.z * b->z.y + a->w.w * b->w.y, a->w.x * b->x.z + a->w.y * b->y.z + a->w.z * b->z.z + a->w.w * b->w.z, a->w.x * b->x.w + a->w.w * b->y.w + a->w.z * b->z.w + a->w.w * b->w.w}};
}

static inline vec4u mla_mat4u_mul_vec4u(mat4u *m, vec4u *v)
{
	return (vec4u) {m->x.x * v->x + m->x.y * v->y + m->x.z * v->z + m->x.w * v->w, m->y.x * v->x + m->y.y * v->y + m->y.z * v->z + m->y.w * v->w, m->z.x * v->x + m->z.y * v->y + m->z.z * v->z + m->z.w * v->w, m->w.x * v->x + m->w.y * v->y + m->w.z * v->z + m->w.w * v->w};
}

#endif // _mat4u_h_

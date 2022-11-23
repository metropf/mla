#ifndef _mat2_h_
#define _mat2_h_

#include "vec2.h"

typedef struct {
	vec2i x, y;
} mat2i;

static inline mat2i mla_mat2i_init(void)
{
	return (mat2i) {{1, 0},
			        {0, 1}};
}

static inline void mla_mat2i_array(mat2i *src, int32_t dest[2][2])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
}

static inline mat2i mla_mat2i_mul(mat2i *a, mat2i *b)
{
	return (mat2i) {{a->x.x * b->x.x + a->x.y * b->y.x, a->x.x * b->x.y + a->x.y * b->y.y},
					{a->y.x * b->x.x + a->y.y * b->y.x, a->y.x * b->x.y + a->y.y * b->y.y}};
}

typedef struct {
	vec2u x, y;
} mat2u;

static inline mat2u mla_mat2u_init(void)
{
	return (mat2u) {{1, 0},
			        {0, 1}};
}

static inline mat2u mla_mat2u_mul(mat2u *a, mat2u *b)
{
	return (mat2u) {{a->x.x * b->x.x + a->x.y * b->y.x, a->x.x * b->x.y + a->x.y * b->y.y},
					{a->y.x * b->x.x + a->y.y * b->y.x, a->y.x * b->x.y + a->y.y * b->y.y}};
}

static inline void mla_mat2u_array(mat2u *src, uint32_t dest[2][2])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
}

typedef struct {
	vec2f x, y;
} mat2f;

static inline mat2f mla_mat2f_init(void)
{
	return (mat2f) {{1.0f, 0.0f},
			        {0.0f, 1.0f}};
}

static inline mat2f mla_mat2f_mul(mat2f *a, mat2f *b)
{
	return (mat2f) {{a->x.x * b->x.x + a->x.y * b->y.x, a->x.x * b->x.y + a->x.y * b->y.y},
					{a->y.x * b->x.x + a->y.y * b->y.x, a->y.x * b->x.y + a->y.y * b->y.y}};
}

static inline void mla_mat2f_array(mat2f *src, float dest[2][2])
{
	dest[0][0] = src->x.x;
	dest[0][1] = src->x.y;

	dest[1][0] = src->y.x;
	dest[1][1] = src->y.y;
}

#endif // _mat2_h_

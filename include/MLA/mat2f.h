#ifndef _mat2f_h_
#define _mat2f_h_

#include "vec2f.h"

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

#endif // _mat2f_h

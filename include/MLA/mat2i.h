#ifndef _mat2i_h_
#define _mat2i_h_

#include "vec2i.h"

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

#endif // _mat2i_h

#ifndef _util_h_
#define _util_h_

#define MLA_PI 3.14159f

static inline float mla_rad(float degrees)
{
	return degrees * MLA_PI / 180.0f;
}

#endif // _util_h_

#include <MLA/mla.h>

#include <stdio.h>

int main(void)
{
	mat3i matrix = mla_mat3i_init();
	matrix = mla_mat3i_mul(&matrix, &matrix);

	int32_t matrix_arr[3][3];
	mla_mat3i_array(&matrix, matrix_arr);

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j)
			printf("%d ", matrix_arr[i][j]);
		printf("\n");
	}

	return 0;
} 

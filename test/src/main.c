#include <MLA/mla.h>

#include <stdio.h>

int main(void)
{
	mat4f matrix = mla_mat4f_init();
	float matrix_arr[4][4];
	mla_mat4f_array(&matrix, matrix_arr);

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j)
			printf("%.1f ", matrix_arr[i][j]);
		printf("\n");
	}

	return 0;
} 

#include "main.h"
/**
 * main -
 * Return:
*/

int **alloc_grid(int width, int height)
{
	int len;
	int len2;
	int **matrix;

	(void)len2;
	matrix = malloc(height * sizeof(int));

	for (len = 0; len < height; len++)
	{
		matrix[len] = malloc(width * sizeof(int));
	}

	return (matrix);
}

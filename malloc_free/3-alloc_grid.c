#include "main.h"
/**
 * alloc_grid - creates a 2 dimensional array
 * @width: the widht of the array
 * @height: the height of the array
 * Return: a 2 dimentional array
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

	for (len = 0; len < height; len++)
	{
		for (len2 = 0; len2 < widht; len2++)
		{
			matrix[len][len2] = 0;
		}
	}

	return (matrix);
}

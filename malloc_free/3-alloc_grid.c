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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(height * sizeof(int *));
	if (!matrix)
	{
		return (NULL);
	}

	for (len = 0; len < height; len++)
	{
		matrix[len] = malloc(width * sizeof(int));
		if (!matrix[len])
		{
			return (NULL);
		}
	}

	for (len = 0; len < height; len++)
	{
		for (len2 = 0; len2 < width; len2++)
		{
			matrix[len][len2] = 0;
		}
	}

	return (matrix);
}

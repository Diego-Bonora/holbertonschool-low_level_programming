#include "main.h"
/**
 * free_grid - frees memory of a grid
 * @grid: input grid
 * @height: height of the grid
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int len;

	for (len = 0; len < height; len++)
	{
		free(grid[len]);
	}
	free(grid);
}

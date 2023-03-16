#include "main.h"
/**
 * array_range - creates an array from min to max
 * @min: input number
 * @max: input number
 * Return: array of integers
*/

int *array_range(int min, int max)
{
	int len;
	int *pointer;
	int total_len;

	if (min > max)
	{
		return (NULL);
	}
	total_len = max - min;
	pointer = malloc(total_len * sizeof(int));
	if (!pointer)
	{
		return (NULL);
	}
	for (len = 0; len < total_len; len++)
	{
		pointer[len] = min + len;
	}
	return (pointer);
}

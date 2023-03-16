#include "main.h"
/**
 * array_range - creates an array from min to max
 * @min: input number
 * @max: input number
 * Return: array of integers
*/

int *array_range(int min, int max)
{
	int len = 0;
	int *pointer;
	int total_len;

	if (min > max)
	{
		return (NULL);
	}
	total_len = max - min;
	if (total_len == 0)
	{
		total_len++;
	}
	pointer = malloc(total_len * sizeof(int) + 1);
	if (!pointer)
	{
		return (NULL);
	}
	while (len < total_len)
	{
		pointer[len] = min + len;
		len++;
	}
	if (len != 0)
	{
		len--;
	}
	pointer[len] = min + len;
	return (pointer);
}

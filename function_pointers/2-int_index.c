#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - looks for the index of array that returns 1 in cmp
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: -1 if fail, else index of array
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int len;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (len = 0; len < size; len++)
		{
			if (cmp(array[len]))
			{
				return (len);
			}
		}
	}
	return (-1);
}

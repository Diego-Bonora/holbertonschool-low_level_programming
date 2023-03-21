#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each element of the array
 * @array: input array
 * @size: size of the array
 * @action: pointer to function
 * Return: nothingi
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t len;

	if (action && array)
	{
		for (len = 0; len < size; len++)
		{
			action(array[len]);
		}
	}
}

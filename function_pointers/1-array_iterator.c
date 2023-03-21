#include <stdio.h>
#include "funtion_pointers.h"
/**
 * array_iterator - prints each element of the array
 * @array: input array
 * @size: size of the array
 * @action: pointer to function
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int len;

	if (action)
	{
		for (len = 0; len < size; len++)
		{
			action(array[len]);
		}
	}
}

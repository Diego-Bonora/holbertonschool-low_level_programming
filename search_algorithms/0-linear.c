#include "search_algos.h"

/**
 * linear_search - searchs a value inside an array and returns the index
 * @array: input array with numbers
 * @size: size of the array
 * @value: value to search
 * Return: returns the index of the value or -1 if fail
*/

int linear_search(int *array, size_t size, int value)
{
	size_t counter;
	int index = 0;

	if (array)
	{
		for (counter = 0; counter < size; counter++, index++)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[counter]);
			if (array[counter] == value)
				return (index);
		}
	}
	return (-1);
}

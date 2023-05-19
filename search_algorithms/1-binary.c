#include "search_algos.h"

/**
 * binary_search - searchs a value using the binary search algorithm
 * @array: input array of numbers
 * @size: size of the array
 * @value: value to search
 * Return: returns the index of the number of -1 if fail
*/

int binary_search(int *array, size_t size, int value)
{
	int mid, low = 0, high = size - 1, counter;

	if (array)
	{
		while (low <= high)
		{
			printf("Searching in array: ");
			for (counter = low; counter <= high; counter++)
			{
				printf("%d", array[counter]);
				if (counter < high)
					printf(" ,");
			}
			putchar('\n');
			mid = low + (high - low) / 2;
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return (-1);
}

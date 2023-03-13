#include "main.h"
/**
 * create_array - alocates with malloc
 * @size: the size of alocation
 * @c: tha character to fill c
 * Return: character
*/

char *create_array(unsigned int size, char c)
{
	char *test;
	unsigned int len;

	if (size <= 0)
	{
		return (NULL);
	}
	test = malloc(size * sizeof(char));
	if (test == NULL)
	{
		return (NULL);
	}
	else
	{
		for (len = 0; len < size; len++)
		{
			test[len] = c;
		}
	}
	return (test);
}

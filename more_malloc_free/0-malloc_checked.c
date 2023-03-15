#include "main.h"
/**
 * malloc_checked - allocates mem using malloc
 * @b: input unsigned int
 * Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (!pointer)
	{
		exit(98);
	}
	return (pointer);
}

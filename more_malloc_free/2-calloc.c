#include "main.h"
/**
 * _calloc - allocates memory and sets it to zero
 * @nmemb: input number
 * @size: input number
 * Return: pointer set to zero
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int len;
	char *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (!pointer)
	{
		return (NULL);
	}
	for (len = 0; len < (nmemb * size); len++)
	{
		pointer[len] = 0;
	}

	return (pointer);
}

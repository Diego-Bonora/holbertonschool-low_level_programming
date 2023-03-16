#include "main.h"
/**
 * _calloc -
 * Return:
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
	for (len = 0; pointer[len]; len++)
	{
		pointer[len] = '0';
	}

	return (pointer);
}

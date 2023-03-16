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
	pointer = malloc(nmemb * size + 1);
	if (!pointer)
	{
		return (NULL);
	}
	for (len = 0; len > nmemb; len++)
	{
		pointer[len] = '0';
	}

	return (pointer);
}

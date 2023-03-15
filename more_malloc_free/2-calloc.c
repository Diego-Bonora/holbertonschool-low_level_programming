#include "main.h"
/**
 * _calloc -
 * Return:
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	pointer = malloc(nmemb * size);
	if (!pointer)
	{
		return (NULL);
	}

	return (pointer);
}

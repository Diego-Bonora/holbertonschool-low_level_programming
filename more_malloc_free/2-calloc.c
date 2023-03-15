#include "main.h"
/**
 * _calloc -
 * Return:
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * sizeof(size));
	if (!pointer)
	{
		return (NULL);
	}
	return (pointer);
}

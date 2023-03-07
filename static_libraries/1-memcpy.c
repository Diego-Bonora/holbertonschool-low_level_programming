#include "main.h"
/**
 * _memcpy - copies n bytes of src to dest
 * @dest: destination of copy
 * @src: source of copy
 * @n: input int
 * Return: string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}

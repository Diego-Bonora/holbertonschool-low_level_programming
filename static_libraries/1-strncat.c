#include "main.h"
/**
 * _strncat - cocatenates n characters to dest
 * @dest: string output
 * @src: string input
 * @n: input number
 * Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int lent = 0;

	for (len = 0; dest[len]; len++)
	{}

	while (src[lent] != '\0' && lent < n)
	{
		dest[len] = src[lent];
		len++;
		lent++;
	}
	return (dest);
}

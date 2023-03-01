#include <stdio.h>
/**
 * _strncpy - copies a string into another string
 * @dest: string output
 * @src: string input
 * @n: input number
 * Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}

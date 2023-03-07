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
	int len = 0;

	while (len < n)
	{
		dest[len] = src[len];
		if (src[len] == '\0')
			break;
		len++;
	}
	while (len < n)
	{
		dest[len++] = '\0';
	}
	return (dest);
}

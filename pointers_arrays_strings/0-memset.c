#include "main.h"
/**
 * _memset - fills n bytes with b character
 * @s: input string
 * @b: input character
 * @n: input integer
 * Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		s[len] = b;
	}
	return (s);
}

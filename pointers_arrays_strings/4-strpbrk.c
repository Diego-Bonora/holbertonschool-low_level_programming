#include "main.h"
/**
 * _strpbrk - return a pointer to the first accepted letter
 * @s: input string
 * @accept: accepted letters
 * Return: string
*/

char *_strpbrk(char *s, char *accept)
{
	int len;

	while (*s != '\0')
	{
		for (len = 0; accept[len]; len++)
		{
			if (*s == accept[len])
			{
				return (s);
			}
		}
		*s++;
	}

	return (NULL);
}

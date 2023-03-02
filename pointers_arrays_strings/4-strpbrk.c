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
	int len2;

	for (len = 0; s[len]; len++)
	{
		for (len2 = 0; accept[len2]; len2++)
		{
			if (s[len] == accept[len2])
			{
				return (s);
			}
		}
	}
	if (s[len] == '\0')
	{
		return (NULL);
	}
	return (s);
}

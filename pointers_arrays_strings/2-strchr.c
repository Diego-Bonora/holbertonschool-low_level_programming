#include "main.h"
/**
 * _strchr - locates the first c character of a string
 * @s: input string
 * @c: character to locate
 * Return: string
*/

char *_strchr(char *s, char c)
{
	while (*s != c);
	{
		s++;
	}
	return (s);
}

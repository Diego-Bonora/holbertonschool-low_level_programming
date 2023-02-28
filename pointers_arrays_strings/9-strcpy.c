#include "main.h"
/**
 * _strcpy - copies a string into another string
 * @dest: output string
 * @src: input string
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\n'; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}

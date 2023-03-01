#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: output string
 * @src: input string
 * Return: string
*/

char *_strcat(char *dest, char *src)
{
	int len;
	int lent;

	for (len = 0; dest[len]; len++)
	{}

	for (lent = 0; src[lent]; lent++)
	{
		dest[len] = src[lent];
		len++;
	}
	return (*dest);
}

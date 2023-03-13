#include "main.h"
/**
 * _strdup - duplicates a string into a new one
 * @str: input string to duplicate
 * Return: duplicate string
*/

char *_strdup(char *str)
{
	char *copy;
	int len;

	for (len = 0; str[len]; len++)
	{}

	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(len * sizeof(char));

	for (len = 0; str[len]; len++)
	{
		copy[len] = str[len];
	}
	return (copy);
}

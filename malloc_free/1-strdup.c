#include "main.h"
/**
 * _strdup - duplicates a string into a new one
 * @str: input string to duplicate
 * Return: duplicate string
*/

char *_strdup(char *str)
{
	char *copy;
	int len = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++
	}

	copy = malloc(len * sizeof(char));

	for (len = 0; str[len]; len++)
	{
		copy[len] = str[len];
	}
	return (copy);
}

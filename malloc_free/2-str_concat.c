#include "main.h"
/**
 * str_concat - concatenates 2 strings into a new one
 * @s1: string input number 1
 * @s2: string input number 2
 * Return: new string
*/

char *str_concat(char *s1, char *s2)
{
	int len;
	int len2;
	int newlen = 0;
	char *newstr;

	if (s1 == NULL)
		len = 1;
	else
		for (len = 0; s1[len]; len++)
		{}
	if (s2 == NULL)
		len2 = 1;
	else
		for (len2 = 0; s2[len2]; len2++)
		{}
	newstr = malloc((len + len2) * sizeof(char) + 1);
	if (!newstr)
		return (NULL);
	while (len >= 0)
	{
		newstr[newlen] = s1[newlen];
		newlen++;
		len--;
	}
	newlen--;
	len++;
	while (len2 >= 0)
	{
		newstr[newlen] = s2[len];
		newlen++;
		len++;
		len2--;
	}
	return (newstr);
}

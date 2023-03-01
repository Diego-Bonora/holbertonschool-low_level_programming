#include "main.h"
/**
 * string_toupper - convert lower cases into uppercases
 * @n: input string
 * Return: nothing
*/

char *string_toupper(char *n)
{
	int len;

	for (len = 0; n[len]; len++)
	{
		if (n[len] >= 97 && n[len] <= 122)
		{
			n[len] -= 32;
		}
	}
	return (n);
}

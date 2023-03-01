#include "main.h"
/**
 * string_toupper -
 * Return:
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

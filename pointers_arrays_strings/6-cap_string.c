#include "main.h"
/**
 * cap_string - capitalices all words
 * @n: input string
 * Return: nothing
*/

char *cap_string(char *n)
{
	int list[]= {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int len;
	int len2;
	
	if (n[0] >= 97 && n[0] <= 122)
	{
		n[0] -= 32;
	}

	for (len = 0; list[len]; len++)
	{
		for (len2 = 0; n[len2]; len2++)
		{
			if (n[len2] == list[len])
			{
				if (n[len2 + 1] >= 97 && n[len2 + 1] <= 122)
				{
					n[len2 + 1] -= 32;
				}
			}
		}
	}
	return (n);
}

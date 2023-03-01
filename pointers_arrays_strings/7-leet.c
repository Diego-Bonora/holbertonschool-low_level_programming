#include "main.h"
/**
 * leet -
 * @n
 * Return:
*/

char *leet(char *n)
{
	int listascii[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	int listanum[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int len;
	int len2;

	for (len = 0; listascii[len]; len++)
	{
		for (len2 = 0; n[len2]; len2++)
		{
			if (n[len2] == listascii[len])
			{
				n[len2] = listanum[len];
			}
		}
	}
	return (n);
}

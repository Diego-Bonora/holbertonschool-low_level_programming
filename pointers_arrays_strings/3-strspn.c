#include "main.h"
/**
 * _strspn - counts amount of bytes that are not accepter
 * @s: input string
 * @accept: string of accepted characters
 * Return: amount of not accepter characters
*/

unsigned int _strspn(char *s, char *accept)
{
	int temp;
	int len;
	int len2;
	unsigned int amount = 0;

	for (len = 0; accept[len]; len++)
	{
		temp = 0;
		for (len2 = 0; s[len2]; len2++)
		{
			if (s[len2] != accept[len])
			{
				temp = 1;
			}
		}
		if (temp == 1)
		{
			amount++;
		}
	}
	return (amount);
}

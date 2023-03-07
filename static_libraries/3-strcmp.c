#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: output string
 * @s2:	input string
 * Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int len;
	int num = 0;

	for (len = 0; s1[len] && s2[len]; len++)
	{
		if (s1[len] != s2[len])
		{
			num = s1[len] - s2[len];
			break;
		}
	}
	return (num);
}

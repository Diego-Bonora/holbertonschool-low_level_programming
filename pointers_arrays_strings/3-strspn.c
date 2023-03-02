#include "main.h"
/**
 * _strspn - counts amount of bytes that are not accepter
 * @s: input string
 * @accept: string of accepted characters
 * Return: amount of not accepter characters
*/

unsigned int _strspn(char *s, char *accept)
{
	int len;
	int len2;
	int temp;
	int len3;
	int not[60];
	int cnot = 0;
	unsigned int num = 0;

	(void)len3;
	(void)cnot;
	(void)not;

	for (len = 0; s[len]; len++)
	{
		temp = 0;
		for (len2 = 0; accept[len2]; len2++)
		{
			if (s[len] == accept[len2])
			{
				temp++;
			}
			else
		}
		if (temp == 0)
		{
			num++;
		}
	}
	return (num);
}

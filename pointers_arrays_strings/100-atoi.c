#include "main.h"
/**
 * main -
 * Return:
*/

int _atoi(char *s)
{
	long int num = 0;
	int sign = 1;
	int len = 0;
	int lens;
	int top = 0;

	for (lens = 0; s[lens]; lens++)
	{}

	while (top != 1)
	{
		if (s[len] >= 48 && s[len] <= 57)
		{
			num = num * 10;
			num = num + s[len] - '0';
			top = 2;
		}
		
		if (top == 2 && (s[len] < 48 && s[len > 57]))
		{
			top = 1;
		}

		if (s[len] == '+')
		{
			sign *= 1;
		}
		else if (s[len] == '-')
		{
			sign *= -1;
		}
		if (len == lens)
		{
			top = 1;
		}
		len++;
	}
	num *= sign;
	return (num);
}


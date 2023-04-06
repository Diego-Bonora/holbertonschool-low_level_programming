#include "main.h"

/**
 * print_binary - converts a decimal into binary
 * @n: input decimal number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int sum = 2;
	int loop = 0;

	if (n == 0 || n == 1)
		putchar(n + '0');
	else
	{
		while (sum <= n)
			sum *= 2;
		sum = division(sum);
		while (sum >= 1)
		{
			if (n >= sum)
			{
				putchar('1');
				n -= sum;
			}
			else
				putchar('0');
			loop++;
			sum = division(sum);
		}
	}
}

/**
 * division - function for dividing without sign 
 * @sum: input number
 * Return: returns the division of a number divided by 2
 */

unsigned int division(unsigned int sum)
{
	if (sum < 2)
	{
		return (0);
	}

	return (1 + division(sum - 2));
}

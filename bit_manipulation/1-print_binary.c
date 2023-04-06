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
		printf("%lu", n);
	else
	{
		while (sum <= n)
			sum *= 2;
		sum /= 2;
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
			sum /= 2;
		}
	}
}

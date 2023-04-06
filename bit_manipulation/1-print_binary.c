#include "main.h"

/**
 * print_binary - converts a decimal into binary
 * @n: input decimal number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int sum;
	int loop = 0;
	int flag = 0;

	(void)loop;
	if (n == 0 || n == 1)
		putchar(n + '0');
	else
	{
		for (loop = 62; loop >= 0; loop--)
		{
			sum = n >> loop;

			if (sum & 1)
			{
				putchar('1');
				flag = 1;
			}
			else
				if (flag == 1)
					putchar('0');
		}
	}
}

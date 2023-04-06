#include "main.h"

/**
 * print_binary - converts a decimal into binary
 * @n: input decimal number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int sum = 2;
	char buffer[64];
	int loop;

	if (n == 0 || n == 1)
		printf("%lu", n);
	else
	{
		for (loop = 0; loop <= 64; loop++)
			buffer[loop] = '\0';
		loop = 0;
		while (sum <= n)
			sum *= 2;
		sum /= 2;
		while (sum >= 1)
		{
			if (n >= sum)
			{
				buffer[loop] = '1';
				n -= sum;
			}
			else
				buffer[loop] = '0';
			loop++;
			sum /= 2;
		}
		printf("%s", buffer);
	}
}

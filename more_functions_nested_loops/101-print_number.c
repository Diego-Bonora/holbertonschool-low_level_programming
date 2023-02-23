#include "main.h"
/**
 * print_number - prtins a number using _putchar
 * @n: input number
 * Return:nothing
*/

void print_number(int n)
{
	int left;
	int right;
	int signo = 1;

	if (n < 0)
	{
		signo = -1;
	}

	if (n >= 1000)
	{
		right = n / 100;
		left = n % 100;
		_putchar((right / 10) * signo + '0');
		_putchar(right % 10 + '0');
		_putchar(left / 10 + '0');
		_putchar(left % 10 + '0');
	}
	else if (n >= 100)
	{
		right = n / 10;
		left = n % 10;
		_putchar((right / 10) * signo + '0');
		_putchar(right % 10 + '0');
		_putchar(left);
	}
	else if (n >= 10)
	{
		_putchar((n / 10) * signo + '0');
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n + '0');
}

#include "main.h"
/**
 * print_line - prints _ n times
 * @n: input number
 * Return:nothing
*/

void print_line(int n)
{
	int number;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (number = 0; number < n; number++)
			_putchar('_');
		_putchar('\n');
	}
}

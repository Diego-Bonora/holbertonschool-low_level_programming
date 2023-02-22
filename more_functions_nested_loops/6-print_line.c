#include "main.h"
/**
 * print_line - prints _ n times
 * @n: input number
 * Return:nothing
*/

void print_line(int n)
{
	int number;

	for (number = 0; number <= n; number++)
		_putchar('_');
	_putchar('\n');
}

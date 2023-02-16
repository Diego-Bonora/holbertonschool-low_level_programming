#include "main.h"
/**
 * print_sign - prints +, 0 or - depending on n
 * @n: character to be used
 * Return: int 0, 1 or -1
*/
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


#include "main.h"
#include <stdio.h>
/**
 * print_number - prtins a number using _putchar
 * @n: input number
 * Return:nothing
*/

void print_number(int n)
{
	int num = 0;
	int negativo = 0;

	if (n < 0)
	{
		n = n * -1;
		negativo = 1;
	}
	while (n >= 10)
	{
		num = num * 10;
		num = num + n % 10;
		n = n / 10;
	}
	num = num * 10;
	num = num + n % 10;

	if (negativo == 1)
	{
		_putchar('-');
	}

	while (num >= 10)
	{
		_putchar(num % 10 + '0');
		num = num / 10;
	}
	_putchar(num + '0');

}

#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 * Return: last digit of number
*/
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = (n * -1) % 10;
	else
		digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}

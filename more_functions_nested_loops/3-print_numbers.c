#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: nothing
*/

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		_putchar(number + '0');
	_putchar('\n');
}

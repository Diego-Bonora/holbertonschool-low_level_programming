#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: nothing
*/

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && numer != 4)
			_putchar(number + '0');
	}
	_putchar('\n');
}
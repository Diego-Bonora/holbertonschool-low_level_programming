#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 * Return:nothing
*/

void more_numbers(void)
{
	int times;
	int number;

	for (times = 0; times <= 9; times++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}

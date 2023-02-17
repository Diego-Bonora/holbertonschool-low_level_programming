#include "main.h"
/**
 * times_table - prints the tables from 0 to 9
 * Return: nothing
*/
void times_table(void)
{
	int number;
	int multiplication;
	int multi_number;

	for (number = 0; number <= 9; number++)
	{
		for (multiplication = 0; multiplication <= 9; multiplication++)
		{
			multi_number = number * multiplication;
			if (multi_number >= 10)
			{
				_putchar(multi_number / 10 + '0');
				_putchar(multi_number % 10 + '0');
			}
			else
			{
				if (multiplication != 0)
				{
					_putchar(' ');
				}
				_putchar(multi_number + '0');
			}
				if (multiplication != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * times_table - prints the tables from 0 to 9
 * Return: nothing
*/
void times_table(void)
{
	int number;
	int multiplication;

	for (number = 0; number <= 9; number++)
	{
		for (multiplication = 0; multiplication <= 9; multiplication++)
		{
			_putchar((number * multiplication) + '0');
			if (multiplication != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

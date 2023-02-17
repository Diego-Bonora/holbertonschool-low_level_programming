#include "main.h"
/**
 * print_times_table - prints the tables from 0 to 9
 * @n: input number
 * Return: nothing
*/
void print_times_table(int n)
{
	int number;
	int multiplication;
	int multi_number;
	int number3;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (number = 0; number <= n; number++)
		{
			for (multiplication = 0; multiplication <= n; multiplication++)
			{
				multi_number = number * multiplication;
				if (multi_number >= 10 && multi_number <= 99)
				{	_putchar(' ');
					_putchar(multi_number / 10 + '0');
					_putchar(multi_number % 10 + '0'); }
				else if (multi_number >= 100)
				{	number3 = multi_number / 10;
					_putchar(number3 / 10 + '0');
					_putchar(number3 % 10 + '0');
					_putchar(multi_number % 10 + '0'); }
				else
				{
					if (multiplication != 0)
					{	_putchar(' ');
						_putchar(' ');
						_putchar(multi_number + '0'); } }
					if (multiplication != n)
					{	_putchar(',');
						_putchar(' '); }
			}
			_putchar('\n');
		}
	}
}

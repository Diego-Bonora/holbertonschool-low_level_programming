#include "main.h"
/**
 * print_diagonal - prints \ diagonaly n times
 * @n: input number
 * Return:nothing
*/

void print_diagonal(int n)
{
	int number;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (number = 0; number < n; number++)
		{
			spaces = number;
			while (spaces != 0)
			{
				_putchar(' ');
				spaces--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

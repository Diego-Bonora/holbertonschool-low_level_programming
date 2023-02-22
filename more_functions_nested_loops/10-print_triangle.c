#include "main.h"
/**
 * print_triangle - prints a triangle of n size
 * @size: input number
 * Return:nothing
*/

void print_triangle(int size)
{
	int number;
	int space;
	int amount;

	for (number = 0; number < size; number++)
	{
		space = size - number - 1;
		while (space != 0)
		{
			_putchar(' ');
			space--;
		}
		amount = number + 1;
		while (amount != 0)
		{
			_putchar('#');
			amount--;
		}
		_putchar('\n');
	}
}

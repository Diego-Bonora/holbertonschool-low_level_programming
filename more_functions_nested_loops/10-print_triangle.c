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

	for (number = 0; number < size; number++)
	{
		space = size - number - 1;
		while (space != 0)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}

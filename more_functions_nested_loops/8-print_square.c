#include "main.h"
/**
 * print_square - prints an n size square
 * @size: input number
 * Return:nothing
*/

void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}

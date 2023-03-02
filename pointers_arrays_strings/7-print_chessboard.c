#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: input board
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int len;
	int len2;
	int max = 8;

	for (len = 0; len < max ; len++)
	{
		for (len2 = 0; len2 < max; len2++)
		{
			_putchar(a[len][len2]);
		}
	}
}

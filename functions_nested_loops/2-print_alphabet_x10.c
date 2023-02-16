#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: nothing
*/
void print_alphabet_x10(void)
{
	int number;
	int letter;

	for (number = 0; number <= 9; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

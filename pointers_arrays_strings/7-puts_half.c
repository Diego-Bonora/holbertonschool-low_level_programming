#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: input string
 * Return: nothing
*/

void puts_half(char *str)
{
	int len;
	int count;
	int amount;

	for (len = 0; str[len]; len++)
		;

	amount = len / 2 + 1;

	for (count = amount; count < len; count++)
		_putchar(str[count]);
	_putchar('\n');
}

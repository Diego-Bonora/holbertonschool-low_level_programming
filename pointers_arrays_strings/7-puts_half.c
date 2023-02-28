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

	len--;
	if (len % 10 != 0)
		amount = (len - 1) / 2;
	else
		amount = len / 2

	for (count = amount; count <= len; count++)
		_putchar(str[count]);
	_putchar('\n');
}

#include "main.h"
/**
 * puts2 - prints every other character
 * @str: input character
 * Return:nothing
*/

void puts2(char *str)
{
	int len;
	int count;

	for (len = 0; str[len]; len++)
	{}

	for (count = 0; count <= len; count++)
	{
		if (count % 2 == 0)
			if (count != len)
				_putchar(str[count]);
	}
	_putchar('\n');
}

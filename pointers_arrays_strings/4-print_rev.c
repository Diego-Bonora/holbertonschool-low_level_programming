#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string input
 * Return: nothing
*/

void print_rev(char *s)
{
	int len;
	int changer;
	int count;

	for (len = 0; s[len] != '\0'; len++)
	{}

	for (count = 0; count <= len / 2; count++)
	{
		changer = s[count];
		s[count] = s[len - count -1];
		s[len - count -1] = changer;
	}
	
	for (count = 0; s[count] != '\0'; count++)
        {
                _putchar(s[count]);
        }
        _putchar('\n');
}

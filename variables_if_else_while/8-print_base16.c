#include <stdio.h>
/**
 * main - prints all numbers from base 16
 * Return: int 0
*/
int main(void)
{
	int number;
	char letter;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}

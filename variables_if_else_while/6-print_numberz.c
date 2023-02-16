#include <stdio.h>
/**
 * main - prints numbers from 0 to 9 using putchar
 * Return: int 0
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');
	putchar('\n');
	return (0);
}

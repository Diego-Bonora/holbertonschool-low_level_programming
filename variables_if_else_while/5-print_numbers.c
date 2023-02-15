#include <stdio.h>
/**
 * main - print numbers from 0 to 9
 * Return: int 0
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		printf("%d", number);
	putchar('\n');
	return (0);
}

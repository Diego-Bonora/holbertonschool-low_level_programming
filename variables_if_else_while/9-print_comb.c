#include <stdio.h>
/**
 * main - prints all numbers from 0 to 9 with ,
 * Return: int 0
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

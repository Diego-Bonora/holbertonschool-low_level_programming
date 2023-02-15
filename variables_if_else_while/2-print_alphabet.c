#include <stdio.h>
/**
 * main - prints alphabet using putchar
 * Return: int 0
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

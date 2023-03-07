#include <stdio.h>
/**
 * main - prints the name of the program
 * Return: int 0
*/

int main(void)
{
	int len;

	for (len = 0; len < argc; len++)
	{
		printf("argv[%d]", len);
	}
	return (0);
}

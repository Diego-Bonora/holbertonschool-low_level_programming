#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: input number
 * @argv: input string array
 * Return: int 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

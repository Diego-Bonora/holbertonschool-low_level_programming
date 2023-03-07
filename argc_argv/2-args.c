#include <stdio.h>
/**
 * main - prints all the arguments one per line
 * @argc: input number
 * @argv: input string array
 * Return: int 0
*/

int main(int argc, char *argv[])
{
	int len;

	for (len = 0; len < argc; len++)
	{
		printf("%s\n", argv[len]);
	}
	return (0);
}

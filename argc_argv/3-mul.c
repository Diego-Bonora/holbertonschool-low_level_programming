#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: input number
 * @argv: input string array
 * Return: int 1 or suma
*/

int main(int argc, char *argv[])
{
	int suma;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	suma = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", suma);
	return (suma);
}

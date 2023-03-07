#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of numbers
 * @argc: input number
 * @argv: input string array
 * Return: int 1 if error else 0
*/

int main(int argc, char *argv[])
{
	int len, len2;
	int suma = 0;

	for (len = 1; len < argc; len++)
	{
		for (len2 = 0; argv[len][len2]; len2++)
			if (argv[len][len2] < 48 || argv[len][len2] > 57)
			{
				printf("Error\n");
				return (1);
			}
		suma += atoi(argv[len]);
	}
	printf("%d\n", suma);
	return (0);
}

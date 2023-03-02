#include "main.h"
/**
 * print_diagsums - prints the sum of the diagonals
 * @a: input matrix
 * @size: input size of matrix
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int len;
	int suma1 = 0;
	int suma2 = 0;

	for (len = 0; len < size; len++)
	{
		suma1 += a[len + (len * size)];
		suma2 += a[(size * (len + 1)) - (len + 1)]; 
	}
		printf("%d, %d", suma1, suma2);
	putchar('\n');
}

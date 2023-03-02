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
	int len2 = 0;
	int suma = 0;

	for (len = 0; len < size; len++)
	{
		suma += a[len][len];
	}
	printf("%d", suma);

	for (len = size - 1; len >= 0; len--)
	{
		suma += a[len][len2];
		len2++;
	}
	printf(", %d", suma);
}

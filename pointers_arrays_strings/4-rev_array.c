#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: input array
 * @n: input lenght
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int len;
	int temp;

	for (len = 0; len < n / 2; len++)
	{
		temp = a[len];
		a[len] = a[n - len - 1];
		a[n - len - 1] = temp;
	}
}

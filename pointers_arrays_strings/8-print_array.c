#include "main.h"
/**
 * print_array - prints n numbers of the array
 * @a:input array
 * @n:input number
 * Return:nothing
*/

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count <= n - 1; count++)
	{
		printf("%d", a[count]);
		if (count != n - 1)
		{
			printf(", ");
		}
	}
}

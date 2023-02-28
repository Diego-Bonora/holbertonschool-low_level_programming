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

	for (count = 0; count <= n; count++)
	{
		printf("%d", a[count]);
		if (count != n)
		{
			printf(", ");
		}
	}
	putchar('\n');
}

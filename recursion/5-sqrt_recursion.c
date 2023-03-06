#include "main.h"
/**
 * _sqrt_recursion - finds the sqrt of a number
 * @n: input number
 * Return: the sqrt of a number
*/

int _sqrt_recursion(int n)
{
	int num = 0;

	return (numsum(num, n));
}

/**
 * numsum - finds the sqrt of a number
 * @x: input number to sum
 * @n: input number for the sqrt
 * Return: the sqrt for the main function
 */

int numsum(int x, int n)
{
	x++;
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (numsum(x, n));
}

#include "main.h"
/**
 * main -
 * Return:
*/

int _sqrt_recursion(int n)
{
	int num = 0;
	return (numsum(num, n));
}

int numsum(int x, int n)
{
	x++;
	if (x * x == n)
	{
		return (x);
	}
	else if(x * x > n)
	{
		return (-1);
	}
	return (numsum(x, n));
}

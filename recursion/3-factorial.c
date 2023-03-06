#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: integer input
 * Return: factorial of a number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

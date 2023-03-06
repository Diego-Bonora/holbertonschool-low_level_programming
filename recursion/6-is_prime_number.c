#include "main.h"
/**
 * is_prime_number - returns 1 if n its a prime number
 * @n: input number
 * Return: 1 or 0
*/

int is_prime_number(int n)
{
	int num = 2;

	if (n <= 1)
	{
		return (0);
	}

	return (numsum(num, n));
}

/**
 * numsum - function for finding prime number
 * @x: input auxiliar number
 * @n: input number
 * Return: 1 or 0
 */

int numsum(int x, int n)
{
	if (n % x == 0 && x != n)
	{
		return (0);
	}
	else if (x == n)
	{
		return (1);
	}
	return (numsum(x + 1, n));
}

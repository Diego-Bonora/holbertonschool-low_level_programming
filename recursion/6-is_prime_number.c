#include "main.h"
/**
 * is_prime_number - returns 1 if n its a prime number
 * @n: input number
 * Return: 1 or 0
*/

int is_prime_number(int n)
{
	int num = n;

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
	num--;
	if (n % num == 0 && num != 0)
	{
		return (0);
	}
	else if (num == 0)
	{
		return (1);
	}
	return (numsum(num, n));
}

#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all the input arguments
 * @n: input argument
 * Return: sum of all the arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int len;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (len = 0; len < n ; len++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

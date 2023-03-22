#include "variadic_functions.h"
/**
 * print_numbers - prints all the numbers passed
 * @separator: separator to print between arguments
 * @n: number of arguments
 * Return:
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int len;
	va_list ap;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	va_start(ap, n);
	for (len = 0; len < (n - 1); len++)
	{
		if (!separator)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}

#include "variadic_functions.h"
/**
 * print_strings - prints n strings followed by a separator
 * @separator: the separator to be printed between strings
 * @n: ammount of strings
 * Return:
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int len;
	char *temp;
	va_list ap;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	va_start(ap, n);
	for (len = 0; len < (n - 1); len++)
	{
		temp = va_arg(ap, char*);
		if (!separator)
			if (!temp)
				printf("(nil)");
			else
				printf("%s", temp);
		else
			if (!temp)
				printf("(nil)%s", separator);
			else
				printf("%s%s", temp, separator);
	}
	temp = va_arg(ap, char*);
	if (temp == NULL)
		printf("(nil)");
	else
	{
		printf("%s", temp);
	}
	putchar('\n');
	va_end(ap);
}

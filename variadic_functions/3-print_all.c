#include "variadic_functions.h"
#include <ctype.h>

/**
 * main -
 * Return:
*/

void print_all(const char * const format, ...)
{
	int len = 0;
	int len2 = sizeof(format);
	va_list ap;

	format_t form[] = {
		{'i', print_int},
		{'c', print_char},
		{'f', print_float},
		{'s', print_string},
		{NULL, NULL}
	};


	va_start(ap, format);
	printf("%d", len2);
	printf("%s", format);
	va_end(ap);
}

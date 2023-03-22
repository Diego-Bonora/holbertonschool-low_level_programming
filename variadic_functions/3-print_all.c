#include "variadic_functions.h"
#include <ctype.h>
/**
 * print_int - prints an integer
 * @arg: argument
 * Return: nothig
*/

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_char - prints a character
 * @arg: argument
 * Return: nothig
*/

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_float - prints a float number
 * @arg: argument
 * Return: nothig
*/

void print_float(va_list arg)
{
	double num;

	num = va_arg(arg, double);
	printf("%f", num);
}


/**
 * print_string - prints a string
 * @arg: argument
 * Return: nothig
*/

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints everything
 * @format: list of arguments
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int len = 0;
	int len2;
	va_list ap;
	char *str1 = "";
	char *str2 = ", ";
	format_t form[] = {
		{'i', print_int},
		{'c', print_char},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(ap, format);
	while (format[len])
	{
		len2 = 0;
		while (form[len2].op)
		{
			if (format[len] == form[len2].op)
			{
				printf("%s", str1);
				form[len2].f(ap);
				str1 = str2;
			}
			len2++;
		}
		len++;
	}
	putchar('\n');
	va_end(ap);
}

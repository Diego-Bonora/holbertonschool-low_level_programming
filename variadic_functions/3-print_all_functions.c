#include "variadic_functions.h"
/**
 * print_int - prints an integer
 * arg: argument
 * Return: nothig
*/

void print_int(va_list arg)
{
	int num;

	num = va_list(arg, int);
	printf("%d", num);
}

/**
 * print_char - prints a character
 * arg: argument
 * Return: nothig
*/

void print_char(va_list arg)
{
	char letter;

	letter = va_list(arg, char);
	printf("%c", letter);
}

/**
 * print_float - prints a float number
 * arg: argument
 * Return: nothig
*/

void print_float(va_list arg)
{
	float num;

	num = va_list(arg, float);
	pruntf("%f", num);
}


/**
 * print_string - prints a string
 * arg: argument
 * Return: nothig
*/

void print_string(va_list arg)
{
	char *str;

	str = va_list(arg, char*);
	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

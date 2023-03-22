#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct formats - functions for printing different formats
 * 
 */

typedef struct format
{
	char *op;
	int (*f)(va_list arg);
} format_t;

void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif

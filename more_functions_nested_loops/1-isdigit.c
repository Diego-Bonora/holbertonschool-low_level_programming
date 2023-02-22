#include "main.h"
/**
 * _isdigit - returns 1 if its a digit
 * @c: inout number 
 * Return: 1 if its a digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isdigit - returns 1 if its a digit
 * @c: inout number 
 * Return: 1 if its a digit
*/

int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}

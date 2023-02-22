#include "main.h"
/**
 * _isupper - returns 1 if c is uppercase, else return 0
 * @c:input number
 * Return:1 or 0 depending of c
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

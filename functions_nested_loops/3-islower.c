#include "main.h"
/**
 * _islower - returns 1 if lowercase else returns 0
 * @c: character to be used
 * Return: int number
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

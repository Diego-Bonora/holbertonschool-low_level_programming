#include "main.h"
/**
 * _pow_recursion - prints the ouput of x to the power of y
 * @x: input number
 * @y: input number for the power
 * Return: a number to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

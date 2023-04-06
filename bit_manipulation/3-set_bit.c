#include "main.h"

/**
 * set_bit - sets a specific bit to 1
 * @n: input number
 * @index: place of the bit to change
 * Return: returns 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= 1 << index;
	return (11);
}

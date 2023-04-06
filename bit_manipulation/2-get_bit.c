#include "main.h"

/**
 * get_bit - gets the bit from the index
 * @n: input number
 * @index: index for the bit
 * Return: returns 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int valor;

	if (index > 64)
		return (-1);

	valor = n >> index;
	if (valor & 1)
		return (1);
	return (0);
}

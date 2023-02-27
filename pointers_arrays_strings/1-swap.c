#include "main.h"
/**
 * swap_int - swaps 2 int values
 * @a: input number 1
 * @b: input number 2
 * Return:nothing
*/

void swap_int(int *a, int *b)
{
	int changer;

	changer = *a;
	*a = *b;
	*b = changer;
}

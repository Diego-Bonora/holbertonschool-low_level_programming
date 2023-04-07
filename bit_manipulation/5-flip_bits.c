#include "main.h"

/**
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int value1;
	int value2;
	int loop;
	unsigned int sum = 0;

	for (loop = 63; loop >= 0; loop--)
	{
		value1 = n >> loop;
		value2 = m >> loop;

		if ((value1 & 1) || (value2 & 1))
		{
			if(value1 != value2)
				sum += 1;
		}
	}
	return (sum);
}

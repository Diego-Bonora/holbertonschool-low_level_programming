#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: input binary number
 * Return: returns the unsigned int number from a binary input
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int sum_helpper;
	int num;
	int num_loop;
	int loop;

	if (!b)
		return (0);
	num = strlen(b);
	for (loop = 0; b[loop]; loop++)
	{
		if (b[loop] != '0' && b[loop] != '1')
		{
			return (0);
		}
		else if (b[loop] == '1')
		{
			if (num == 1)
				sum += 1;
			else if (num == 2)
				sum += 2;
			else
			{
				sum_helpper = 2;
				for (num_loop = (num - 1); num_loop > 1; num_loop--)
				{
					sum_helpper *= 2;
				}
				sum += sum_helpper;
			}
		}
		num--;
	}

	return (sum);
}

#include "main.h"

/**
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int sum_helpper;
	int num = strlen(b);
	int num_loop;
	int loop;

	(void)sum;
	(void)num;
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

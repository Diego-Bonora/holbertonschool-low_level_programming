#include <stdio.h>
/**
 * main - gives the biggest factor number
 * Return: variable big
*/

int main(void)
{
	long int variable = 612852475143;
	int num = 2;
	int big = 0;

	while (variable != 1)
	{
		if (variable % num == 0)
		{
			if (num >= big)
				big = num;
			variable = variable / num;
		}
		num++;
	}
	printf("%d\n", big);
	return (0);
}

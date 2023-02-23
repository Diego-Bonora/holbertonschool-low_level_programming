#include <stdio.h>
/**
 * main - gives the biggest factor number
 * Return: variable big
*/

int main(void)
{
	long int variable = 612852475143;
	int mitad = variable / 2;
	int num = 2;
	int big = 0;

	while (num != mitad)
	{
		if (variable % num == 0)
		{
			if (num >= big)
				big = num;
			variable = variable / num;
		}
		num++;
	}
	peinrf("%d", big);
	return (big);
}

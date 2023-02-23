#include <stdio.h>
#include <math.h>
/**
 * main -
 * Return:
*/

int main(void)
{
	long int variable = 612852475143;
	int raiz = sqrt(612852475143) + 1;
	int num = 2;
	int big = 0;

	while (num != raiz)
	{
		if(variable % num == 0)
		{
			if (num >= big)
				big = num;
			variable = variable / num;
		}
		num++;
	}
	printf("%d",big);
	return (big);
}

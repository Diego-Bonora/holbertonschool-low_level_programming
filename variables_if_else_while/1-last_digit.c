#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - gives the last digit os a number
 * Return: int 0
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit == 0)
	{
		printf("Last digit of %d if %d and is 0\n", n, digit);
	}
	else if (digit > 5)
	{
		printf("Last digit of %d if %d and is greater than 5\n", n, digit);
	}
	else
	{
		printf("Last digit of %d if %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}

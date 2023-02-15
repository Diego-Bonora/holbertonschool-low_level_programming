#include <stdio.h>
#include <time.h>
/**
 * main - prints "is positive", "is negative" or "is zero" depending on n
 * Return: int 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("is zero");
	}
	else if (n > 0)
	{
		printf("is positive");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}

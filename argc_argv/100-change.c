#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints change for a number
 * @argc: input number
 * @argv: input string array
 * Return: 1 if error, else 0
*/

int main(int argc, char *argv[])
{
	int num;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num < 0)
		{
			num = 0;
		}
		while (num != 0)
		{
			if (num >= 25)
			{	count++;
				num -= 25; }
			else if (num >= 10)
			{	count++;
				num -= 10; }
			else if (num >= 5)
			{	count++;
				num -= 5; }
			else if (num >= 2)
			{	count++;
				num -= 2; }
			else
			{	count++;
				num -= 1; }
		}
	}
	printf("%d\n", count);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main -
 * Return:
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
		while (num != 0)
		{
			if (num >= 25)
			{
				count ++;
				num -= 25;
			}
			else if (num >= 10)
			{
				count ++;
				num -= 10;
			}
			else if(num >= 5)
			{
				count ++;
				num -= 5;
			}
			else if (num >= 2)
			{
				count ++;
				num -= 2;
			}
			else
			{
				count ++;
				num -= 1;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}

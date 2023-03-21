#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - 
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*f)(int, int);

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		f = get_op_func(argv[2]);
		if (f)
		{
			if ((strcmp(argv[2], "/") == 0 && num2 == 0) || (strcmp(argv[2], "%") == 0 && num2 == 0))
			{
				printf("Error\n");
				exit(100);
			}
			printf("%d\n", f(num1, num2));
		}
		else
		{
			printf("Error\n");
			exit(99);
		}

	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

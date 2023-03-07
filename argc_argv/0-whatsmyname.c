#include <stdio.h>
/**
 * main - prints the name of the program
 * Return:
*/

void main()
{
	int len;

	for (len = 0; len < argc; len++)
	{
		printf("argv[%d]", len);
	}
}

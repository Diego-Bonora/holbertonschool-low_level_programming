#include "main.h"

/**
 * main - copies the content of file 1 to file 2
 * @argc: amount of arguments
 * @argv: list of arguments
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int ptr;
	FILE *ptr2;
	char buff[1024];
	int flag = 0;

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	ptr = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ptr2 = fopen(argv[1], "r");
	if (!ptr2)
	{
		write(2, "Error: Can't read from file", 27);
		write(2, argv[1], strlen(argv[1]));
		write(2, "\n", 1);
		exit(98);
	}
	if (ptr == -1)
	{
		write(2, "Error: Can't write to", 21);
		write(2, argv[2], strlen(argv[2]));
		write(2, "\n", 1);
		exit(99);
	}
	memset(buff, 0, sizeof(buff));
	fgets(buff, 1024, ptr2);
	while (flag == 0)
	{
		write(ptr, buff, strlen(buff));
		if (feof(ptr2))
			flag = 1;
		else
		{
			memset(buff, 0, sizeof(buff));
			fgets(buff, 1024, ptr2);
		}
	}
	close(ptr);
	fclose(ptr2);
	return (0);
}

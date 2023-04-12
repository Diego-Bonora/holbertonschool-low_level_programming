#include "main.h"

/**
 * main - copies the content of file 1 to file 2
 * @argc: amount of arguments
 * @argv: list of arguments
 * Return: returns 1
 */

int main(int argc, char *argv[])
{
	int ptr;
	FILE *ptr2;
	char buff[1024];

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	ptr = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ptr2 = fopen(argv[1], "r");
	if (ptr == -1)
	{
		write(2, "Error: Can't read from file NAME_OF_THE_FILE\n", 45);
		exit(98);
	}
	if (!ptr2)
	{
		write(2, "Error: Can't write to NAME_OF_THE_FILE\n", 39);
		exit(99);
	}
	fgets(buff, 1024, ptr2);
	dprintf(ptr, "%s", buff);
	close(ptr);
	fclose(ptr2);
	return (1);
}

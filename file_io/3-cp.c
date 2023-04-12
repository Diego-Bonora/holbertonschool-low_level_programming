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
	int check = 0;

	if (argc != 3)
	{
		_return(1, NULL);
	}
	ptr = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ptr2 = fopen(argv[1], "r");
	if (!ptr2)
	{
		_return(2, argv[1]);
	}
	if (ptr == -1)
	{
		_return(3, argv[2]);
	}
	memset(buff, 0, sizeof(buff));
	fgets(buff, 1024, ptr2);
	while (flag == 0)
	{
		check = write(ptr, buff, 1024);
		if (check == -1)
			_return(3, argv[2]);
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

void _return(int section, char *argument)
{
	(void)argument;
	if (section == 1)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	else if (section == 2)
	{
		write(2, "Error: Can't read from file ", 27);
		write(2, argument, strlen(argument));
		write(2, "\n", 1);
		exit(98);
	}
	else if (section == 3)
	{
		write(2, "Error: Can't read from file ", 27);
		write(2, argument, strlen(argument));
		write(2, "\n", 1);
		exit(98);
	}
}

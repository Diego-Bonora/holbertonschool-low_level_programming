#include "main.h"

/**
 * main - copies the content of file 1 to file 2
 * @argc: amount of arguments
 * @argv: list of arguments
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int ptr, true = 1, check = 0;
	FILE *ptr2;
	char buff[1024];

	if (argc != 3)
	{	write(2, "Usage: cp file_from file_to\n", 28);
		exit(97); }
	ptr = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ptr2 = fopen(argv[1], "r");
	if (!ptr2)
	{	write(STDERR_FILENO, "Error: Can't read from file ", 28);
		write(STDERR_FILENO, argv[1], strlen(argv[1]));
		write(STDERR_FILENO, "\n", 1);
		exit(98); }
	if (ptr == -1)
	{	write(STDERR_FILENO, "Error: Can't write to ", 22);
		write(STDERR_FILENO, argv[2], strlen(argv[2]));
		write(STDERR_FILENO, "\n", 1);
		exit(99); }
	memset(buff, 0, sizeof(buff));
	fgets(buff, 1024, ptr2);
	while (true)
	{
		check = write(ptr, buff, 1024);
		if (check == -1)
		{	puts("test");
			write(STDERR_FILENO, "Error: Can't write to ", 22);
			write(STDERR_FILENO, argv[2], strlen(argv[2]));
			write(STDERR_FILENO, "\n", 1);
			exit(99); }
		if (feof(ptr2))
			break;
		memset(buff, 0, sizeof(buff));
		fgets(buff, 1024, ptr2); }
	close(ptr);
	fclose(ptr2);
	if (ptr || ptr2)
	{	write(STDERR_FILENO, "Error: Can't close fd \n", 22);
		exit(100); }
	return (0);
}

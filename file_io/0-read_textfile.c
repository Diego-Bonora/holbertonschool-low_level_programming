#include "main.h"

/**
 * read_textfile - reads and prints text from a file
 * @filename: the name of the file to read
 * @letters: amount of chars to be printed
 * Return: returns the amount of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char letter;
	size_t count = 0;
	FILE *ptr;

	if (!filename)
		return (0);

	ptr = fopen(filename, "r");
	if (!ptr)
		return (0);
	letter = fgetc(ptr);
	while (letters != 0 && letter != EOF)
	{
		write(STDOUT_FILENO, &letter, 1);
		letter = fgetc(ptr);
		count++;
		letters--;
	}
	fclose(ptr);
	return (count);
}

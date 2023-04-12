#include "main.h"

/**
 * append_text_to_file - appends a new text to the end of a file
 * @filename: input name of the file to be opened
 * @text_content: text to append to the end of the file
 * Return: returns 1 or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptr;

	if (access(filename, F_OK) != 0 || !filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	ptr = fopen(filename, "a");
	if (ptr == -1)
		return (-1);
	fprintf(ptr, "%s", text_content);
	fclose(ptr);
	return (1);
}

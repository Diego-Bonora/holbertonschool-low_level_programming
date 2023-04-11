#include "main.h"

/**
 * create_file - creates or truncates a file with the new text
 * @filename: name for the new file
 * @text_content: text for the new file
 * Return: returns 1 if success of -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	FILE *ptr;

	if (!filename)
		return (-1);	
	ptr = fopen(filename, "w+");
	if (!ptr)
		return (-1);

	fputs(text_content, ptr);
	fclose(ptr);
	return (1);
}

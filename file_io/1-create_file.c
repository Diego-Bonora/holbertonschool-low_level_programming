#include "main.h"

/**
 * create_file - creates or truncates a file with the new text
 * @filename: name for the new file
 * @text_content: text for the new file
 * Return: returns 1 if success of -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int ptr;

	if (!text_content)
		test_content = "";
	if (!filename)
		return (-1);
	ptr = open(filename,  O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (ptr == -1)
		return (-1);

	dprintf(ptr, "%s", text_content);
	close(ptr);
	return (1);
}

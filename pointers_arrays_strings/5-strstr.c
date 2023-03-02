#include "main.h"
/**
 * _strstr -
 * Return:
*/

char *_strstr(char *haystack, char *needle)
{
	int len;
	int largo;
	int count = 0;
	int stop = 0;

	(void)len;
	for (largo = 0; needle[largo]; largo++)
	{}

	while (stop == 0)
	{
		if (needle[count] == *haystack)
		{
			count++;
		}
		else
		{
			count = 0;
		}
		if (count == largo)
		{
			stop = 1;
			haystack -= largo;
		}
		haystack++;
	}
	return (haystack);
}

#include "main.h"
/**
 * rev_string - reverses an string
 * @s:input string
 * Return:nothing
*/
void rev_string(char *s)
{
	int len;
	int changer;
	int count;

	for (len = 0; s[len] != '\0'; len++)
	{}

	for (count = 0; count <= len / 2 - 1; count++)
	{
		changer = s[count];
		s[count] = s[len - count - 1];
		s[len - count - 1] = changer;
	}
}

#include "main.h"
/**
 * string_nconcat - concatenates string 1 and n numbers of string 2
 * @s1: input string 1
 * @s2: input string 2
 * @n: input amounts of numbers for the second string
 * Return: returns a concatenated char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len;
	unsigned int len2;
	unsigned int len3 = 0;
	unsigned int newstrlen = 0;
	char *newstr;

	(void)newstrlen;
	(void)len3;
	if (s1 == NULL)
		len = 0;
	else
	{
		for (len = 0; s1[len]; len++)
		{} }
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; len2++)
		{}
		if (len2 > n)
			len2 = n; }
	newstr = malloc((len + len2) * sizeof(char) + 1);
	if (!newstr)
		return (NULL);
	if (len != 0)
	{
		for (newstrlen = 0; newstrlen <= len; newstrlen++)
		{
			newstr[newstrlen] = s1[newstrlen]; }
		newstrlen--; }
	if (len2 != 0)
	{
		for (len3 = 0; len3 < len2; len3++)
		{
			newstr[newstrlen] = s2[len3];
			newstrlen++; }}
	newstr[newstrlen] = '\0';
	return (newstr);
}

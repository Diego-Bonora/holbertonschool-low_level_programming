#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: input node
 * Return: amount of lists printed
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int lenght = 0;

	if (!h)
		return (0);

	while (temp != NULL)
	{
		if (temp->str)
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		lenght++;
		temp = temp->next;
	}
	return (lenght);
}

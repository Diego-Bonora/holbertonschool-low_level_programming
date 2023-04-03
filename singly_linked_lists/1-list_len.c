#include "lists.h"

/**
 * list_len - counts how many elements are in the linkedlist
 * @h: input node
 * Return: amount of elements in a linkedlist
 */

size_t list_len(const list_t *h)
{
	list_t *temp;
	int lenght = 0;

	if (!h)
		return (0);

	temp = malloc(sizeof(list_t));
	*temp = *h;

	while (temp != NULL)
	{
		lenght++;
		temp = temp->next;
	}
	free(temp);
	return (lenght);
}

#include "lists.h"

/**
 * dlistint_len - counts the amount ot linked lists
 * @h: input head list
 * Return: amount of linked lists
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

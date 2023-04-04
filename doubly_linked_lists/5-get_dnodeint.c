#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of the position index
 * @head: input node
 * @index: index for the position of the node
 * Return: returns the node of the input index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	if (!head)
		return (NULL);

	while (head != NULL && num < index)
	{
		head = head->next;
		num++;
	}
	if (num != index)
		return (NULL);
	else
		return (head);
}

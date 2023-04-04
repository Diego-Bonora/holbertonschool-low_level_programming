#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at an index
 * @h: input node
 * @idx: index for the new node
 * @n: number for the new node
 * Return: returns the head of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int num = 0;
	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *head = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (!*h)
		return (NULL);

	while (head != NULL && num < (idx - 1))
	{
		head = head->next;
		num++;
	}
	temp = head->next;
	new->n = n;
	new->prev = head;
	new->next = temp;
	head->next = new;
	temp->prev = new;
	return (*h);
}

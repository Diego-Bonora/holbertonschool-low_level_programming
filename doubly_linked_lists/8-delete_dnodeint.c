#include "lists.h"

/**
 * delete_dnodeint_at_index - removes a node at a certain index
 * @head: index node
 * @index: the place of the node for the removal
 * Return: returns 1 if completed, -1 if error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *h;
	unsigned int num = 0;

	if (*head == NULL || (!(*head)->next && (*head)->n == 0))
		return (-1);
	h = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL)
			free(h);
		else
		{	new = *head;
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(new); }
		return (1); }
	while (h != NULL && num < (index - 1))
	{	h = h->next;
		num++; }
	if (!h)
		return (-1);
	else if (h->next == NULL)
	{	new = h;
		h = h->prev;
		free(new); }
	else
	{	new = h;
		h = h->next;
		temp = h;
		if (h->next == NULL)
		{	new->next = NULL;
			free(temp); }
		else
		{	h = h->next;
			new->next = h;
			h->prev = new;
			free(temp); } }
	return (1); }

#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: input node
 * @n: number for the new node
 * Return: returns the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new = *head;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);

	if (!*head)
	{
		temp->n = n;
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		while (new != NULL)
		{
			if (new->next == NULL)
			{
				temp->n = n;
				temp->prev = new;
				temp->next = NULL;
				new->next = temp;
				break;
			}
			new = new->next;
		}
	}
	return (*head);
}

#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: input node
 * @n: number for the new node
 * Return: returns the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t temp;

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
		temp->n = n;
		temp->prev = *head;
		temp->next = NULL;
		(*head)->next = temp;
		*head = temp;
	}
	return (*head);
}

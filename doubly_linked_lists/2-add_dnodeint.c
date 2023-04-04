#include "lists.h"

/**
 * add_dnodeint - adds a node to the head
 * @head: input node
 * @n: int for inserting into new node
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

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
		temp->prev = NULL;
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
	return (*head);
}

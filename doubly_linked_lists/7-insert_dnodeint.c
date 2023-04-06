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
	{	new->n = n;
		new->prev = NULL;
		new->next = NULL;
		(*h) = new;
		return (*h); }
	if (idx == 0)
	{	new->n = n;
		new->prev = NULL;
		new->next = *h;
		(*h)->prev = new;
		(*h) = new;
		return (new); }
	while (head != NULL && num < (idx - 1))
	{	head = head->next;
		num++; }
	if (head == NULL)
		return (NULL);
	else if (head->next == NULL)
	{	new->n = n;
		new->prev = head;
		new->next = NULL;
		head->next = new; }
	else
	{	temp = head->next;
		new->n = n;
		new->prev = head;
		new->next = temp;
		head->next = new;
		temp->prev = new; }
	return (new);
}

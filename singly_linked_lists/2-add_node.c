#include "lists.h"

/**
 * add_node - creates a new node as the head
 * @head: head node
 * @str: str for the node
 * Return: returns the adress for the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	len = strlen(str);
	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}

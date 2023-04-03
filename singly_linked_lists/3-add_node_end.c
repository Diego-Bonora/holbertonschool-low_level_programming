#include "lists.h"

/**
 * add_node_end - adds a node to the end of the linkedlist
 * @head: the first node
 * @str: string to put in the new node
 * Return: returns pointer to the first node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *recorer;
	unsigned int len;

	recorer = malloc(sizeof(list_t));
	if (!recorer)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (!temp)
		free(recorer);
		return (NULL);

	len = strlen(str);
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		recorer = *head;
		while (recorer != NULL)
		{
			if (recorer->next == NULL)
			{
				recorer->next = temp;
				break;
			}
			recorer = recorer->next;
		}
	}
	return (*head);
}

#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: input node
 * Return: amount of lists printed
 */

size_t print_list(const list_t *h)
{
	list_t *temp;
	int lenght = 0;

	if (!h)
		return (0);

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (-1);
	}

	*temp = *h;

	while (temp != NULL)
	{
		if (temp->str)
		{	
			printf("[%u] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		lenght++;
		temp = temp->next;
	}

	free(temp);
	return (lenght);
}

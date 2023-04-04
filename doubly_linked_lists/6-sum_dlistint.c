#include "lists.h"

/**
 * sum_dlistint - sums all numbers from a linked list
 * @head: input node
 * Return: returns the sum of all the numbers
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

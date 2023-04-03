#include "lists.h"

/**
 *
 *
 *
 */

void free_list(list_t *head)
{
	free_head(head);
}

void free_head(list_t *head)
{
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		return;
	}
	free_head(head->next);
	free(head->str);
	free(head);
}

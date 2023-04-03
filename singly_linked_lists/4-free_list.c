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
	if (!head)
		return;
	free_head(head->next);
	free(head->str);
	free(head);
}

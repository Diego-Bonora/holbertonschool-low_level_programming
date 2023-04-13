#include "hash_tables.h"

/**
 * hash_table_delete - delets a hash table
 * @ht: hash table imput
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *delete;
	unsigned long int count;

	if (ht == NULL)
		return;

	for (count = 0; count < ht->size; count++)
	{
		temp = ht->array[count];
		delete = temp;
		while (temp)
		{
			temp = temp->next;
			free(delete->key);
			free(delete->value);
			free(delete);
			delete = temp;
		}
	}
	free(ht->array);
	free(ht);
}

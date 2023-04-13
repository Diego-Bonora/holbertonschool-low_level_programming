#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table input
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *temp;
	char *space = "";

	if (ht == NULL)
		return;

	putchar('{');
	for (count = 0; count < ht->size; count++)
	{
		temp = ht->array[count];
		while (temp)
		{
			printf("%s", space);
			printf("'%s': '%s'", temp->key, temp->value);
			space = ", ";
			temp = temp->next;
		}
	}
	putchar('}');
	putchar('\n');
}

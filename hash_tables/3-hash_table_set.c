#include "hash_tables.h"

/**
 * hash_table_set - sets a new node on the hash table
 * @ht: input hash table
 * @key: is the key of the node
 * @value: is the value of the node
 * Return: returns 1 or 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *new_node;
	hash_node_t *temp;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node || !key)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	hash = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash] == NULL)
	{
		ht->array[hash] = new_node;
	}
	else
	{
		temp = ht->array[hash];
		while (temp)
		{
			if (temp->next == NULL)
			{
				temp->next = new_node;
				break;
			}
			temp = temp->next;
		}
	}
	return (1);
}

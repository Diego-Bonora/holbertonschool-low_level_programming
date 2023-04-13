#include "hash_tables.h"

/**
 * hash_table_get - finds a value using a key
 * @ht: hash table input
 * @key: the key for finding the value
 * Return: returns the value of the key or NULL if fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
		return (NULL);
	hash = key_index((unsigned char *)key, ht->size);
	temp = ht->array[hash];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

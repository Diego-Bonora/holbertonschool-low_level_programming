#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: returns the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int count;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * 8);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (count = 0; count < size; count++)
		table->array[count] = NULL;
	return (table);
}

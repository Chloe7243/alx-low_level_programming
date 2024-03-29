#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: pointer to table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
		return (NULL);

	return (new_table);
}

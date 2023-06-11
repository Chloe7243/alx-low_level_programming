#include "hash_tables.h"

/**
 * hash_table_get - gets element from hash table
 * @ht: hash table
 * @key: hash item key
 * Return: Returns the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

#include "hash_tables.h"

/**
 * hash_table_set - adds element to hast table
 * @ht: hash table
 * @key: hash item key
 * @value: hash item value
 * Return: 0 is failed; 1 if successful
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *item = malloc(sizeof(hash_node_t)), *table_index;

	if (item == NULL)
		return (0);
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);

	if (item->key == NULL || item->value == NULL)
		return (0);
	strcpy(item->key, strdup(key));
	strcpy(item->value, strdup(value));
	item->next = NULL;

	index = key_index((unsigned char *)key, ht->size);
	table_index = ht->array[index];

	if (table_index == NULL)
		ht->array[index] = item;
	else
	{
		while (table_index->next)
			table_index = table_index->next;
		table_index->next = item;
	}

	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_delete - deletes table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned int i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i])
			{
				ptr = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = ptr;
			}
		}
		free(ptr);
		free(ht->array);
		free(ht);
	}
}

#include "hash_tables.h"

/**
 * hash_table_print - gets all elements from table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i, next = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (next)
					printf(", ");
				next = 1;
				temp = ht->array[i];
				while (temp)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					if (temp->next != NULL)
						printf(", ");
					temp = temp->next;
				}
			}
		}
		printf("}\n");
	}
}

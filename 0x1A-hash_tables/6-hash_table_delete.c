#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *all = NULL, *ptr = NULL;

	if (ht == NULL)
		return;

	if (ht && ht->size && ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			all = ht->array[i];

			if (all != NULL)
			{
				if (all->next != NULL)
				{
					all = all->next;
					while (all)
					{
						ptr = all;
						all = all->next;
						free(ptr->key);
						free(ptr->value);
						free(ptr);
					}
				}

				all = ht->array[i];
				if (all->key && all->value)
				{
					free(all->key);
					free(all->value);
				}
			}
			free(all);
		}
		free(ht->array);
		free(ht);
		ht = NULL;
	}
}

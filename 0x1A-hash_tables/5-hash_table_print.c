#include "hash_tables.h"

/**
 * hash_table_print -  a function that prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *ptr;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	for (k = 0; k < ht->size; k++)
	{
		ptr = ht->array[k];

		while (ptr != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			f = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}

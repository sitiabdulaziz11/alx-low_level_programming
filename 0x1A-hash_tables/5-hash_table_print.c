#include "hash_tables.h"

/**
 * hash_table_print -  a function that prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *ptr;

	if (ht == NULL)
		return;

	printf("{\n");

	for (k = 0; k < ht->size; k++)
	{
		ptr = ht->array[k];

		while (ptr != NULL)
		{
			printf("%s : %s", ptr->key, ptr->value);
			if (ptr->next != NULL)
				printf(", ");
			ptr = ptr->next;
		}
		if (k < ht->size - 1)
			printf(",");
	}
	printf("\n}\n");
}

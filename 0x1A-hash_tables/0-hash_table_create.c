#include "hash_tables.h"

/**
 * hash_table_create -  a function that creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newt;
	unsigned long int j;

	newt = malloc(sizeof(hash_table_t));
	if (newt == NULL)
		return (NULL);

	newt->size = size;
	newt->array = malloc(sizeof(hash_node_t *) * size);
	if (newt->array == NULL)
	{
		free(newt);
		return (NULL);
	}

	for (j = 0; j < size; j++)
		newt->array[j] = NULL;
	return (newt);
}

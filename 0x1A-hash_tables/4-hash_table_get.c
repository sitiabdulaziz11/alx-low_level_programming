#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: ht is the hashtable
 * @key: key
 *
 * Return: value associated with the element or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *crt = NULL;
	size_t idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = hash_djb2((const unsigned char *) key) % ht->size;
	crt = ht->array[idx];

	while (crt != NULL)
	{
		if (strcmp(crt->key, key) == 0)
			return (crt->value);
		crt = crt->next;
	}

	return (NULL);
}

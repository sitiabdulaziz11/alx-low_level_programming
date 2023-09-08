#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table we want to add or update the key/value to.
 * @key: is key
 * @value: value associated with the key.
 *
 * Return: 1 if succeed, 0 else.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	hash_node_t *newn = NULL, *dt = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	dt = ht->array[indx];
	indx = key_index((const unsigned char *)key, ht->size);

	if (dt != NULL && strcmp(dt->key, key) == 0)
	{
		dt->value = strdup(value);
		return (1);
	}
	else
	{
		newn = malloc(sizeof(hash_node_t));

		if (newn == NULL)
			return (0);

		newn->key = strdup(key);
		newn->value = strdup(value);
		newn->next = dt;
		dt = newn;
		return (1);
	}
}

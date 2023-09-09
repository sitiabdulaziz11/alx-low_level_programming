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
	char *newv;

	if (ht == NULL || key == NULL || ht->array == NULL || ht->size == 0 ||
			strlen(key) == 0 || value == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	dt = ht->array[indx];

	while (dt != NULL)
	{
		if (strcmp(key, dt->key) == 0)
		{
			newv = strdup(value);
			if (newv == NULL)
				return (0);
			free(dt->value);
			dt->value = newv;
			return (1);
		}
		dt = dt->next;
	}

	newn = create_hash_node(key, value);
	if (newn == NULL)
		return (0);

	newn->next = ht->array[indx];
	ht->array[indx] = newn;
	return (1);
}
/**
 * create_hash_node - create new hash node.
 * @value: value.
 * @key: key
 * Return: new node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *nd;

	nd = malloc(sizeof(hash_node_t));
	if (nd == NULL)
		return (NULL);
	nd->key = strdup(key);
	if (nd->key == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->value = strdup(value);
	if (nd->value == NULL)
	{
		free(nd->key);
		free(nd);
		return (NULL);
	}
	nd->next = NULL;
	return (nd);
}

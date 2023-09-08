#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int p;

	hash = 5381;

	while ((p = *str++))
		hash = ((hash << 5) + hash) + p;

	return (hash);
}
/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size: size of the array.
 * Return: the index at which the key/value should be stord.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_value;
	unsigned long int index;

	h_value = hash_djb2(key);
	index = h_value % size;

	return (index);
}

#include "hash_tables.h"

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

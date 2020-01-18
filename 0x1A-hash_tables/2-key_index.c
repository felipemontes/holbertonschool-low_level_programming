#include "hash_tables.h"
/**
 * key_index - function to return the key index
 * @key: key to hash
 * @size: size of the hashtable
 * Return: the hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}

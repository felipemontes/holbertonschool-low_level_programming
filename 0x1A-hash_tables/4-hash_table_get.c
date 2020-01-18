#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hashtable
 * @key: key to search
 * Return: the value associated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx = key_index((unsigned char *)key, ht->size);
	char *nkey = strdup(key);
	hash_node_t *tmp;

	tmp = ht->array[idx];
	if (ht == NULL)
		return (NULL);
	while (tmp)
	{
		if (strcmp(tmp->key, nkey) == 0)
			break;
		tmp = tmp->next;
	}
	free(nkey);

	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}

#include "hash_tables.h"
/**
 * h_index - function to get the hash
 * @key: key to hash
 * @size: size of the hash
 * Return: return the hash
 */
unsigned int h_index(const char *key, unsigned int size)
{
	unsigned int h_index = 0;
	unsigned int i = 0;

	while (key[i])
	{
		h_index += key[i] % size;
		i++;
	}

	return (h_index);
}
/**
 * hash_table_set - creates a new node in the hashtable
 * @ht: pointer to the hashtable
 * @key: key
 * @value: value to place in the node
 * Return: 1  in success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode = malloc(sizeof(hash_node_t));
	unsigned long int haidx;
	hash_node_t *tmp;

	if (ht == NULL || key == '\0')
		return (0);
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	haidx = h_index(newnode->key, ht->size);
	if (ht->array[haidx] != NULL)
	{
		tmp = ht->array[haidx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, newnode->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			newnode->next = ht->array[haidx];
			ht->array[haidx] = newnode;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(newnode->value);
			free(newnode->value);
			free(newnode->key);
			free(newnode);
		}
	}
	else
	{
		newnode->next = NULL;
		ht->array[haidx] = newnode;
	}
	return (1);
}

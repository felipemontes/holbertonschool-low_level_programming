#include "lists.h"
/**
 * listint_len - number of elements in a list
 * @h: head
 * Return: number of elem
 *
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}

#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a list
 * @h: head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}

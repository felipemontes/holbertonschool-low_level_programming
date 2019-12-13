#include "lists.h"
/**
 * print_dlistint - printa linked list
 * @h: this is the head of the linked list
 * Return: returns the number of elements in a linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

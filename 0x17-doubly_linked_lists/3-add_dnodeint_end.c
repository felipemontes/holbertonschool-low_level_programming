#include "lists.h"
/**
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *last = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (last !=  NULL)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	newnode->prev = last;
	return (newnode);
}

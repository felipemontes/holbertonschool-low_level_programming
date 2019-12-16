#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at the nth position
 * @h: head of the list
 * @idx: index to insert the node
 * @n: content of the node
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnode;
	dlistint_t *newnode;
	dlistint_t *tmp = *h;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		if (*h != NULL)
		{
			newnode->next = *h;
			(*h)->prev = newnode;
		}
		*h = newnode;
		return (newnode);
	}
	while (i < (idx - 1))
	{
		nnode = tmp, tmp = tmp->next;
		if (tmp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		i++;
	}
	if (tmp->next == NULL)
	{
		tmp->next = newnode, newnode->prev = tmp;
		newnode->next = NULL;
		return (newnode);
	}
	newnode->next = tmp->next, newnode->prev = tmp;
	nnode = tmp->next, tmp->next = newnode, nnode->prev = newnode;
	return (newnode);
}

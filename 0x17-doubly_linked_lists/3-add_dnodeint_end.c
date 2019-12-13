#include "lists.h"
/**
 * add_dnodeint_end - this function adds a new node at the end of a list
 * @head: head of the list
 * @n: element to add to the node
 * Return: new node address or null
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

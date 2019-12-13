#include "lists.h"
/**
 * add_dnodeint - adds a new node in a double linked list
 * @head: head of the linked list
 * @n: element to add to the new node
 * Return: a pointer to the newnode or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode != NULL)
	{
		newnode->next = *head;
		newnode->prev = NULL;
		newnode->n = n;
		if (*head != NULL)
		{
			(*head)->prev = newnode;
		}
		*head = newnode;
		return (newnode);
	}

	return (NULL);
}

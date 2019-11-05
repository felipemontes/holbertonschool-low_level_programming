#include "lists.h"
/**
 * pop_listint - function to delete the head node
 * @head: starting point
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *del;

	if (*head == NULL)
	{
		return (0);
	}

	del = (*head)->next;
	val = (*head)->n;
	free(*head);
	*head = del;

	return (val);
}

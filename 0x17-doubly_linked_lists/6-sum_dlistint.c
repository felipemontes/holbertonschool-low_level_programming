#include "lists.h"
/**
 * sum_dlistint - function to sum all data inside the nodes
 * @head: head of the list
 * Return: the result or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int result = 0;

	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		result += tmp->n;
		tmp = tmp->next;
	}
	return (result);
}

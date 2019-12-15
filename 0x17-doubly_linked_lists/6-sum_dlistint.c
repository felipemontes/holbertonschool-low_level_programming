#include "lists.h"
/**
 * sum_dlistint - function to sum all data inside the nodes
 * @head: head of the list
 * Return: the result or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int result;

	if (head != NULL)
	{
		while(tmp != NULL)
		{
			result += tmp->n;
			tmp = tmp->next;
		}
	return (result);
	}
	return (0);
}
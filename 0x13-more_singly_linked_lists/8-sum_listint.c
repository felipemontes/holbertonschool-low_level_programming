#include "lists.h"
/**
 * sum_listint - returns the sum of all data
 * @head: starting point
 * Return: the sum of all data
 *
 *
 */
int sum_listint(listint_t *head)
{
	int i = 0;


	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}

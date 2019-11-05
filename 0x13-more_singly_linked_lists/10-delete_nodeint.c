#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at a given position
 * @head: starting point
 * @index: index of the list
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *next;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (-1);
	}
	for (i = 0; tmp != NULL && i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
	{
		return (-1);
	}
	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;

	return (1);

}

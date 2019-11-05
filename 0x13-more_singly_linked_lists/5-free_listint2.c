#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: starting point of the list
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}

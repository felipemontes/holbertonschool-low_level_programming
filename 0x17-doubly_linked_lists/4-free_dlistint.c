#include "lists.h"
/**
 * free_dlistint - function to free a linked list
 * @head: head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp->next != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
	free(tmp);
}

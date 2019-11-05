#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: starting point of the list
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}

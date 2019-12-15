#include "lists.h"
/**
 * free_dlistint - function to free a linked list
 * @head: head of the linked list
 */
void free_dlistint(dlistint_t *head)
{

	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}

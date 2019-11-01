#include "lists.h"
#include <stdlib.h>
/**
 * free_list - funtion to free the list
 * @head: head
 *
 */
void free_list(list_t *head)
{
	list_t *next = head->next;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = next;
	}
}

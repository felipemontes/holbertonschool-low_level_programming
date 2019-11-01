#include "lists.h"
#include <stdlib.h>
/**
 * free_list - funtion to free the list
 * @head: head
 *
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}
	free(head);
}

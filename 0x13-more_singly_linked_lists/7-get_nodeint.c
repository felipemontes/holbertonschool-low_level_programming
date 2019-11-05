#include "lists.h"
/**
 *
 *
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i = 0;

	while (curr != NULL)
	{
		if (i == index)
		{
			i++;
			curr = curr->next;
		}
	}
	return (head);
}

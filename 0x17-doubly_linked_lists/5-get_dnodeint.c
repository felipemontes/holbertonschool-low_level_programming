#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node in a list
 * @head: head of the list
 * @index: nth node that we are looking
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (head != NULL)
		{
			head = head->next;
		}
		i++;
	}
	return (head);
}

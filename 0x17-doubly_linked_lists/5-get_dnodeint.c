#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node in a list
 * @head: head of the list
 * @index: nth node that we are looking
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i <= index; i++)
		{
			if (i == index)
			{
				return (head);
			}
			head = head->next;
		}
	}
	return (NULL);
}

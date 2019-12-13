#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node in a list
 * @head: head of the list
 * @index: nth node that we are looking
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (head != NULL)
	{
		for(i = 0; i <= index; i++)
		{
			if (i == index)
			{
				return (tmp);
			}
			tmp = tmp->next;
		}
	}
	return (NULL);
}
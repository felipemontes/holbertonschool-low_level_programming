#include "lists.h"
/**
 * get_nodeint_at_index - function to return the nth node
 * @head: starting point
 * @index: index of the node
 * Return: null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}

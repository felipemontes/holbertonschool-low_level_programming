#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete a note at a given position
 * @head: start of the list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node1 = *head;
	dlistint_t *node2;
	unsigned int i = 0;

	if (node1 != NULL)
		while (node1->prev != NULL)
			node1 = node1->prev;
	while (node1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = node1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				node2->next = node1->next;

				if (node1->next != NULL)
					node1->next->prev = node2;
			}

			free(node1);
			return (1);
		}
		node2 = node1;
		node1 = node1->next;
		i++;
	}

	return (-1);
}

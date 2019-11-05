#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at nth position
 * @head: starting point of the list
 * @idx: index
 * @n: data
 * Return: the adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *cur = *head;
	unsigned int i = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		cur = *head;
		while (i < (idx - 1))
		{
			cur = cur->next;
			i++;
			if (cur == NULL)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = cur->next;
		cur->next = new;
		return (new);
	}
	return (new);
}

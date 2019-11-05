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

	if (head == NULL)
	{
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		return (new);
	}

	new->n = n;
	while (cur->next != NULL && idx - 1 > 0)
	{
		cur = cur->next;
		idx--;
	}

	if (cur->next == NULL)
	{
		return (new);
	}

	new->next = cur->next;
	cur->next = new;

	return (new);
}

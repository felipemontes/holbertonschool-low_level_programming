#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end
 * @head: start
 * @str: string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != 0)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);

}

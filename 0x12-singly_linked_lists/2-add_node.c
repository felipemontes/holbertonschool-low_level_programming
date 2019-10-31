#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node
 * @head: head
 * @str: string
 * Return: addres of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	char *copy = strdup(str);
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = copy;

	for (i = 0; copy[i] != '\0'; i++)
		;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

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
	int i;
	char *copy = strdup(str);
	list_t *new_node = malloc(sizeof(list_t));

	for (i = 0; copy[i] != '\0'; i++)
		;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->len = i;
	new_node->str = copy;
	if (head != NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}

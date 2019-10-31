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
	list_t *copy = malloc(sizeof(list_t));

	if (copy == NULL)
	{
		return (NULL);
	}

	copy->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	copy->len = i;
	copy->next = *head;
	if (head != NULL)
	{
	*head = copy;
	}
	return (*head);
}

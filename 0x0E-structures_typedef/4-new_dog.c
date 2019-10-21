#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - write a function that returns a pointers to a newly allocated str
 * @str: string
 * Return: void
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}

	a = malloc(sizeof(char) * i + 1);

	if (a == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		a[j] = str[j];

	return (a);
}

/**
 * new_dog - copy of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(struct dog));

	if (new == NULL)
	{
		return (NULL);
	}
	new->name = _strdup(name);
	if (new->name == 0)
	{
		free(new);
		return (0);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (new->owner == 0)
	{
		free(new->name);
		free(new);
		return (0);
	}
	return (new);

}

#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the structure
 *
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (d->name == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->owner == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
		printf("Age: %f\n", d->age);
	}
}

#include "dog.h"
#include <stdio.h>
#inlcude <stdlib.h>
/**
 * print_dog - prints the structure
 *
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (!(d == NULL))
	{
		if (d->name == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize structure
 * @d: dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

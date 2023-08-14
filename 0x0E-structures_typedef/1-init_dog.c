#include "dog.h"

/**
 * init_dog - initialize a doggo
 * @d: pointer to the dog struct
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owner
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

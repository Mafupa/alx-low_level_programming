#include "dog.h"

/**
 * free_dog - my dawg aint done none(free space allocated for dog struct)
 * @d: the dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

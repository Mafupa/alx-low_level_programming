#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	while (name[i])
		i++;
	n_dog->name = malloc(sizeof(char) * i + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	n_dog->age = age;
	i = 0;
	while (owner[i])
		i++;
	n_dog->owner = malloc(sizeof(char) * i + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		n_dog->owner[i] = owner[i];
	n_dog->name[i] = '\0';

	return (n_dog);
}

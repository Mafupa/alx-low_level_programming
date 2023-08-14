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
	int i, j, s_name = 0, s_owner = 0;
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	while (name[s_name])
		s_name++;
	while (owner[s_owner])
		s_owner++;
	n_dog->name = malloc(sizeof(char) * s_name + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char) * s_owner + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->age = age;
	for (i = 0; i <= s_name; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	for (j = 0; j <= s_owner; j++)
		n_dog->owner[j] = owner[j];
	n_dog->owner[j] = '\0';
	return (n_dog);
}

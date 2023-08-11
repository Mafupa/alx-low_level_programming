#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each elements
 * Return: Pointer to the allocated memory, NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	for (i = 0; i < size * nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}

#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates and array of char
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the char we initialize it to
 * Return: NULL if size == 0, pointer to the array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (1);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

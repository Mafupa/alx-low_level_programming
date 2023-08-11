#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: starting value
 * @max: end value
 * Return: Pointer to the array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		array[i] = min + i;
	return (array);
}

#include <stdlib.h>

/**
 * array_iterator - calls a function passing each
 * element of an array as a paramater
 * @array: the array
 * @size: size of the array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

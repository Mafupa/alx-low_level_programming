#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: the funtion
 * Return: Index of the first element that matches, -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

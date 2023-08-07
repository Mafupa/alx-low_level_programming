#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pinter to a 2d array
 * @width: width
 * @height: height
 * Return: pointer to 2d array, NULL if a parameter is 0 or on falure
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i > 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}

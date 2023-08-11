#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - realocates memory
 * @ptr: pointer to previously allocated memory
 * @old_size: old size of ptr
 * @new_size: new size
 * Return: Pointer to new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;
	char *old_ptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size <= 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);
	free(old_ptr);
	return (new_ptr);
}

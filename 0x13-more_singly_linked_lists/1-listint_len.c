#include "lists.h"

/**
 * listint_len - returns the lenght of a listint_t linked list
 * @h: the head of the listint_t
 * Return: the length of the listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

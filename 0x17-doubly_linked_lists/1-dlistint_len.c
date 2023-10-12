#include "lists.h"

/**
 * dlistint_len - length of linked list
 * @h: linked list head
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

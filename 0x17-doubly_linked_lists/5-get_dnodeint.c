#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of a linked list
 * @index: index of the list element to fetch
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

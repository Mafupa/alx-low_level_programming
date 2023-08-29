#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the specified index
 * @head: head of the listint_t
 * @index: the index of the node
 * Return: the node at the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

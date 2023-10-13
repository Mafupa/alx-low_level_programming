#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at the specified index
 * @h: the head of the linked list
 * @idx: the idx where to put the new node
 * @n: the value assigned to the node
 * Return: Pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *head = *h, *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	for (; i < idx - 1; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	new->next = head->next;
	head->next = new;
	return (new);
}

	

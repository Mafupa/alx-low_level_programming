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
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (head->prev)
		head = head->prev;
	for (; i < idx - 1; i++)
	{
		if (head->next == NULL)
			return (add_dnodeint_end(h, n));
		head = head->next;
	}
	if (head->next == NULL)
		return (add_dnodeint_end(h, n));
	new->next = head->next;
	new->prev = head;
	head->next->prev = new;
	head->next = new;
	return (new);
}

	

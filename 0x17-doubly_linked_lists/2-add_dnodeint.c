#include "lists.h"

/**
 * add_dnodeint - adds a node at the begining
 * @head: the head of the node
 * @n: the number to add
 * Return: the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *cur;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	cur = *head;
	if (cur)
	{
		while (cur->prev)
			cur = cur->prev;
	}
	new->next = cur;
	if (cur)
		cur->prev = new;
	*head = new;
	return (new);
}

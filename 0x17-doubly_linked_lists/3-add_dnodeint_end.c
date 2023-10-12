#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: head of the double entry list
 * @n: number assigned to the memmory block
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *cur;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	cur = *head;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
	new->prev = cur;
	return (new);
}

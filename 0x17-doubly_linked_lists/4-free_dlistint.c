#include "lists.h"

/**
 * free_dlistint - free element of double linked list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}

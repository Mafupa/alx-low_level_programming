#include "lists.h"

/**
 * free_dlistint - free element of double linked list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (!head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

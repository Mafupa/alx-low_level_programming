#include "lists.h"

/**
 * free_listint - frees the space allocated for all the nodes of a listint_t
 * @head: the head of the listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

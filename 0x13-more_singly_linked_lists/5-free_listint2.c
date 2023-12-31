#include "lists.h"

/**
 * free_listint2 - frees the space allocated for all the nodes of a listint_t
 * and set the head to NULL
 * @head: the head of the listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

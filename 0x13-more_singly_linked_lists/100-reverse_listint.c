#include "lists.h"

/**
 * reverse_listint - reverse a listint_t
 * @head: the head of the listint_t
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = n;
	}
	*head = temp;
	return (*head);
}

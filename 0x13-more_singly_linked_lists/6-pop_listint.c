#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint and returns it's data
 * @head: the head of the listint
 * Return: the data stored by the head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}

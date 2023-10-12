#include "lists.h"

/**
 * sum_dlistint - sum of all elements if a linked list
 * @head: the head of the list int
 * Return: the sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int tot = 0;

	while (head)
	{
		tot += head->n;
		head = head->next;
	}
	return (tot);
}

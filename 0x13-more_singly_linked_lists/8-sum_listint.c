#include "lists.h"

/**
 * sum_listint - sums all the elements of a listint_t
 * @head: the head of the listint_t
 * Return: the sum of all the elements of the list, 0 if it's empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of the linked list
 * @index: index of the element to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur = *head;

	if (!cur)
		return (-1);
	while (cur->prev)
		cur = cur->next;
	if (index == 0)
	{
		cur->next->prev = NULL;
		*head = cur->next;
		free(cur);
		return (1);
	}
	for (; i < index; i++)
	{
		if (cur->next == NULL)
			return (-1);
		cur = cur->next;
	}
	if (cur->next != NULL)
	{
		cur->prev = NULL;
	}
	else
	{
		cur->next->prev = cur->prev;
		cur->prev->next = cur->next;
	}
	free(cur);
	return (1);
}

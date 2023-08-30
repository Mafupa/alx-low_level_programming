#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a nodeint at a certain index
 * @head: head of the listint_t
 * @index: the index of the element to delete
 * Return: 1 if succeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *n = NULL;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index - 1)
		{
			n = temp->next;
			temp->next = n->next;
			free(n);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}

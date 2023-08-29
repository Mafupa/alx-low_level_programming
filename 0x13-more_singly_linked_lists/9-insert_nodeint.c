#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a nodeint at index
 * @head: head of the listint_t
 * @idx: the index
 * @n: the value to insert at idx
 * Return: the address of the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}

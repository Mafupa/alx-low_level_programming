#include "lists.h"

/**
 * add_nodeint - adds a node at the begining of a listint
 * @head: the head of the listint
 * @n: the content of the node added
 * Return: the address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

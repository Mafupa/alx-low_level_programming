#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: the head of the list
 * @str: the string of the node
 * Return: the address of the new node, NULL if error
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new, *temp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	new->str = malloc(sizeof(char) * i + 1);
	if (!new->str)
		return (NULL);
	for (i = 0; str[i]; i++)
		new->str[i] = str[i];
	new->str[i] = '\0';
	new->len = i;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}

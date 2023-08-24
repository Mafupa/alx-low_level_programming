#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to a linked list
 * @head: the head of the list
 * @str: the string the node contains
 * Return: the address of the new element, NULL if error
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	while (str[i])
		i++;
	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

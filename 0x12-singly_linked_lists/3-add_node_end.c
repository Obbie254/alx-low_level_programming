#include "lists.h"

/**
 * add_node_end - fxn that adds a new node at the of a list
 * @head: head pointer
 * @str: str of node to added
 *
 * Return: address of the new node, Null on fail
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new, *ptr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	ptr = new;

	return (ptr);
}

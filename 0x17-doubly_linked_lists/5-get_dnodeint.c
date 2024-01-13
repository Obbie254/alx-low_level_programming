#include "lists.h"
/**
 * get_dnodeint_at_index - this fxn gets the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to be returned
 *
 * Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}

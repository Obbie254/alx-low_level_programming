#include "lists.h"

/**
 * insert_dnodeint_at_index - fxn inserts a new node at a given position
 * @h: pointer to the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: pointer to the new node, or NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			newNode = malloc(sizeof(dlistint_t));
			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = tmp->next;
			newNode->prev = tmp;
			tmp->next = newNode;
			if (newNode->next != NULL)
				newNode->next->prev = newNode;
			return (newNode);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}

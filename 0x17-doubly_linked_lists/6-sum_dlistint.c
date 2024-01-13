#include "lists.h"
/**
 * sum_dlistint - fxn sums up values of all nodes in a dlistint_t list
 * @head: pointer to the head of the list
 * Return: sum, 0 otherwise
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

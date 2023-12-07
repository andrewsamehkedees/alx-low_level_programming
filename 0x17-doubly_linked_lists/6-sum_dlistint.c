#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer to head of list
 * Return: sum of all the data or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the head
 * Return: the sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

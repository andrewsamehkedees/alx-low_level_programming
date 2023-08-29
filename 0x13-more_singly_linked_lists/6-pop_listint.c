#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to a pointer to the head
 * Return: the number n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);
	n = (*head)->n;

	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}

#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer to the head
 * @index: the index of the node
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		while (i < index && temp != NULL)
		{
			prev = temp;
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (-1);
		prev->next = temp->next;
		free(temp);
		return (1);
	}
}

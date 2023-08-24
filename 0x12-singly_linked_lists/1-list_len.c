#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

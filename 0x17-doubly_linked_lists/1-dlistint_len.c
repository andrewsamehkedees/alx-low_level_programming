#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;


	while (current != NULL)
	{
		current = current->next;
		size++;
	}

	return (size);
}

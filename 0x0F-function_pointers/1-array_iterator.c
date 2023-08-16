#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterator for array
 * @array: the array
 * @size: array length
 * @action: function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	else
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

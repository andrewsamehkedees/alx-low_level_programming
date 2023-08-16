#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer in the array
 * @array: the array
 * @size: array length
 * @cmp: function
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}

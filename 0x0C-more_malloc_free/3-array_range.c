#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: minimum number
 * @max: maximum number
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}

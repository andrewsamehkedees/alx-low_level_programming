#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of charachters
 * @size: the size of the array
 * @c: the char
 * Return: a pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return NULL;

	array = mallock(sizeof(char) * size);
	
	if (array == NULL)
		return NULL;
	for (i = 0; i < size; i++)
		array[i] = c;
	return array;
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory using malloc and free
 * @ptr: pointer to the memory
 * @old_size: size for ptr
 * @new_size: the new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int min_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size);

	if (newPtr == NULL)
		return (NULL);

	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;

	memcpy(newPtr, ptr, min_size);

	free(ptr);

	return (newPtr);
}

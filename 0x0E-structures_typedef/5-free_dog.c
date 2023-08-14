#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer
 * Description: This function free memory
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

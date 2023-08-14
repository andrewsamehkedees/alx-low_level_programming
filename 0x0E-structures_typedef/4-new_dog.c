#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int i, name_len = 0, owner_len = 0;

	while (name[name_len++])
		;
	while (owner[owner_len++])
		;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = malloc(name_len);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_name[i] = name[i];
	new_owner = malloc(owner_len);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		new_owner[i] = owner[i];
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}

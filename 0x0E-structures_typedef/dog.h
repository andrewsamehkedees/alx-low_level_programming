#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: a new type names dog with its name, age, and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */

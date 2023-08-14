/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct dog variable to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: This function initialize dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

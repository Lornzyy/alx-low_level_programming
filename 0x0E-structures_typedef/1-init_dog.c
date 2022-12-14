#include "dog.h"

/**
 * init_dog - initialize the dog struct
 * @d: pointer to struct of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


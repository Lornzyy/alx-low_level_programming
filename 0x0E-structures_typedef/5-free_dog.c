#include "dog.h"

/**
 * free_dog - free dog in malloc
 * @d: pointer to the dog to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

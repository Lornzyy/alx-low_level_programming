#include "dog.h"

/**
 * free_dog - free dog in malloc
 * @d: pointer to the dog to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	int i;

	d = malloc(sizeof(dog_t));

	for (i = 0; i < d; i++)
	{
		free(d[i]);
	}
	free(d);
}

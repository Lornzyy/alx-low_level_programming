#include <stdio.h>
#include <math.h>
#include "dog.h"

/**
 * print_dog - function to print struct dog
 * @d: pointer to the dog struct
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	if (d->name == 0)
	{
		printf("Name: (nil)\n");
	}
	if (d->owner == 0)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}


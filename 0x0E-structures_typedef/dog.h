#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - structure to describe dog
 * @name: name of dog
 * @age: of dog
 * @owner: dog owner
 * Description: The struct  of a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */

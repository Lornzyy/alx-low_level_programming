#include "dog.h"

/**
 * str_cpy - function to copy name and owner
 * @src: source to be copied
 * Return: a pointer
 */

char *str_cpy(char *src)
{
	char *ptr_src;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}
	for (len = 0; src[len] != '\0'; len++)
	{
		;
	}
	ptr_src = malloc(sizeof(char) * (len + 1));
	if (ptr_src == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr_src[i] = src[i];
	}
	ptr_src[i] = '\0';
	return (ptr_src);

}


/**
 * new_dog - pointer to the new dog in the dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Dog's owner
 * Return: a pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		return (NULL);
	}

	new_name = str_cpy(name);
	if (new_name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->name = new_name;
	dog2->age = age;

	new_owner = str_cpy(owner);
	if (new_owner == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->owner = new_owner;

	return (dog2);
}


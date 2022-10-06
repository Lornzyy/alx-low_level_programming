#include "main.h"

/**
 * malloc_checked - return pointer to memor
 * @b: size of memory
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}


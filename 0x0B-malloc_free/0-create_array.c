#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array function
 * @size: - size of array
 * @c: initializing char
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptArray;

	unsigned int i;

	ptArray = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptArray[i] = c;
	}

	return (ptArray);

	if (size == 0)
	{
		return (NULL);
	}
}


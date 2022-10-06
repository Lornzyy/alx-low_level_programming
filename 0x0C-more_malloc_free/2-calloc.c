#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: no of elements
 * @size: number of bytes of the array
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arry;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arry = (void *)malloc(size * sizeof(int));
	if (arry == NULL)
		return (NULL);

	return (arry);
}

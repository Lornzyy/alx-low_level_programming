#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: no of elements
 * @size: number of bytes of the array
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arry;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arry = (void *)malloc(nmemb * (size));
	if (arry == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		arry[i] = 0;
	}
	return (arry);
}


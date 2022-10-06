#include "main.h"

/**
 * array_range - create an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = ((max + 1) - min);

	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

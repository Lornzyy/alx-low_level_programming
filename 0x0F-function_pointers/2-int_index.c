#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: array containing hte integers
 * @size: size of the array
 * @cmp: function pointer to compare the integers
 * Return: int when numbers meet request
 * -1 when cmp or array is NULL
 * and -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{

			return (i);
		}
	}
	return (-1);
}


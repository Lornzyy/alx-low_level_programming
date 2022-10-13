#include "function_pointers.h"

/**
 * array_iterator - iterator through array
 * @array: int array to be iterated over
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; size > i; i++)
	{
		action(array[i]);
	}
}


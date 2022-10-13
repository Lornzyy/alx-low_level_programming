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
	if (array == NULL || action == NULL)
		return;

	for (; size-- > 0; array++)
	{
		action(*array);
	}
}


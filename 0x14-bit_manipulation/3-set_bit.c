#include "main.h"

/**
 * set_bit - set value of bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: index to change value at
 * Return: integer to be changes
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}


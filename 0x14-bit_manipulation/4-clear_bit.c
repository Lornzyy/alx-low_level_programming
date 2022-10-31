#include "main.h"

/**
 * clear_bit - set value at indexto value 0
 * @n: pointer to unsigned long int
 * @index: index to set val to 0
 * Return: integer to 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}


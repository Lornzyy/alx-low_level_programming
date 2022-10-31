#include "main.h"

/**
 * get_bit - return bit at a given index
 * @n: the whole number
 * @index: the index to be returned
 * Return: the index to be returned
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}


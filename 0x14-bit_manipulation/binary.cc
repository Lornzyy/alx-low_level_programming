#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 * @b: chars of 0s and 1s
 * Return: an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1, total = 0, i = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += power;
		power *= 2;
	}
	return (total);
}


#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: the const character to convert
 * Return: an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, decval = 1;
	int i;
	unsigned int slen = strlen(b);

	if (b == NULL)
	{
		return (0);
	}
	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			total += decval;
		}
		decval *= 2;
	}
	return (total);
}


#include "main.h"
#include <math.h>

/**
 * binary_to_uint - binary to uint
 * @b: the string of os and 1s
 * Return: an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int i = 0, sum = 0, rem;

	while (num > 0)
	{
		if (b == NULL)
			return (0);

		rem = (num % 10);
		sum += rem * pow(2, i);
		num = (num / 10);

		i++;
		if (b[i] != '0' || b[i] != '1')
			return (0);
	}
	return (sum);
}


#include "main.h"

/**
 * flip_bits - flip through numbers
 * @n: the first number to flip through
 * @m: the second number to get tp
 * Return: the number of bits flipped to get to second number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int flip_num = 0;

	while (result)
	{
		if (1 & result)
		{
			flip_num++;
		}
	}
	return (flip_num);
}


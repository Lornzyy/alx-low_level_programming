#include "main.h"

/**
 * _putchar - write into file
 * @c: charcter produced
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <unistd.h>

/**
 * _putchar - write into a file
 * @c: the character to be written
 * Return: int as a character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

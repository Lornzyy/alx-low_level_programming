#include "main.h"

/**
 * _putchar - function to write into file
 * @c: character
 * Return: Always 0
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}


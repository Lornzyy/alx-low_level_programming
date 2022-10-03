#include <unistd.h>

/**
 * _putchar - function to write into file
 * @c: character
 * Return: 0 when successful
 *	 1 when error occurs plus the errno
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}


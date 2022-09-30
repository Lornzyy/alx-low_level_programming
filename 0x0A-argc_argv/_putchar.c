#include <unistd.h>

/**
 * _putchar - to write into file
 * @c: character to be written
 * Return: charcater, 1 when error occure
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

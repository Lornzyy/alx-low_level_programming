#include<unistd.h>

/**
 * _putchr - function to enable writing into a file
 * @c: the character
 * Return: On success return 1
 *         -1 On error and errno set
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

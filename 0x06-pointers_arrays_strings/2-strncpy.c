#include "main.h"

/**
 * _strncpy - function to copy string
 * @dest: destination of string
 * @src: source of string
 * @n: the number of space remaining
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

 for (i = 0; ((src[i] && i < n) != '\0'); i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);

}

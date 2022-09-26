#include "main.h"

/**
 * _memcpy - copy the memory area
 * @dest: the destination mem address
 * @src: the source mem address
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}

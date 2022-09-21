#include "main.h"

/**
 * _strncat - function to concatenate strings with the limited space
 * @dest: first param
 * @src: - second param
 * @n: no of space remaining
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int index = 0, dest_length = 0;

while (dest[index++])
dest_length++;

for (index = 0; src[index] && index < n; index++)
dest[dest_length++] = src[index];

return (dest);
}

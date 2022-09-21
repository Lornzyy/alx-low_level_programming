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

if (dest == NULL)
return (NULL);
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];

dest[i] = '\0';

return (dest);

}

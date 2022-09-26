#include "main.h"
#include <stdbool.h>

/**
 * _strspn - length of prefix substring
 * @s: number of bytes in initial segment
 * @accept: source of bytes
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}

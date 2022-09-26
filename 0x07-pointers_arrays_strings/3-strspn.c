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
int i, j;
int len1 = strlen(accept);
int len2 = strlen(s);
size_t length = 0;
bool found = false;

for (i = 0; i < len1; i++)
{
for (j = 0; j < len2; j++)

if (s[j] == accept[i])
{
found = true;
break;
}
if (found != true)
break;
else
length++;
}
return (length);
}

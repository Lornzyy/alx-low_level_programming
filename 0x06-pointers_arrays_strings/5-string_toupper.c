#include "main.h"
#include <ctype.h>
/**
 * string_toupper - function to capitalize all letters of a word
 * @s: param
 * Return: Always 0
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)
s[i] = s[i] - 32;
}
return (s);
}

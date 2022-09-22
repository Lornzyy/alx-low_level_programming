#include "main.h"

/**
 * cap_string - function to capitalize every word of a string
 * @s: the param
 * Return: s
 */

char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i)
{
if (1 == 0)

{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
printf("%c", s[i]);
}

else if (s[i - 1] == ' ')
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
printf("%c", s[i]);
}
else
printf("%c", s[i]);
}
return (s);
}




#include "main.h"

/**
* cap_string - function to capitalize every word of a string
* @s: the param
* Return: s
*/

char *cap_string(char *s)
{
int i;
while (s[++i])
{
while (!(s[i] >= 'a' && s[i] <= 'z'))
i++;

if (
s[i - 1] == ' ' ||

(s[i - 1] == '\t') ||

(s[i - 1] == '\n') ||

(s[i - 1] == ',') ||

(s[i - 1] == ';') ||

(s[i - 1] == '.') ||

(s[i - 1] == '!') ||

(s[i - 1] == '?') ||

(s[i - 1] == '"') ||

(s[i - 1] == '(') ||

(s[i - 1] == ')') ||

(s[i - 1] == '{') ||

(s[i - 1] == '}')
)
s[i] -= 32;
}
return (s);
}

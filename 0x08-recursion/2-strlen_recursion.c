#include "main.h"

/**
 * _strlen_recursion - find string length using recursion
 * @s: string to find length of
 * Return: 0 when null terminator is encounters
 *         int when the length is found
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}

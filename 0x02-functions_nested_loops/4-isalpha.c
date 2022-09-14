#include "main.h"
/**
 * _isalpha - function to check if c is lowercase or upercase
 * @c: the character used in the argument of this function
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}

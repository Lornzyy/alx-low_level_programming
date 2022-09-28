#include "main.h"

/**
 * _pow_recursion - power of an integer using recursion
 * @x: is the base number
 * @y: the exponent value
 * Return: int resulting from the powering
 *         -1 for any number below 0
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, (y - 1)));
}
else
return (-1);
}

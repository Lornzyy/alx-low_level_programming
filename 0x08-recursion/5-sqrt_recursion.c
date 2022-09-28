#include "main.h"

/**
 * _square - to find if number has a square
 * @n: the number
 * @x: the number to be squared
 * Return: -1 for on that does not have natural sqrt
 *         the number when it has a sqrt
 */

int square (int x, int n)
{
if ((x * x) == n)
{
return (x);
}
else if ( x > (n / 2))
{
return (-1);
}
else
{
return square(x + 1, n);  
}
}

/**
 * _sqrt_recursion - find sqrt of number
 * @n: number to find square root of
 * Return: number
 */
int _sqrt_recursion(int n)
{
return (square(1, n));
}

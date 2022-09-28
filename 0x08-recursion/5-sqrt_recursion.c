#include "main.h"

/**
 * _sqrt_recursion - to find natural square rot
 * @n: the number
 * Return: -1 for on that does not have natural sqrt
 *         the number when it has a sqrt
 */
int _sqrt_recursion(int n)
{
int x = 1;
while (x * x <= n)
{
if ((x * x) == n)
{
return (x);
}
x++;
}
if ((x * x) != n)
{
return (-1);  
}
return (x);
}

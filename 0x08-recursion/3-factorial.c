#include "main.h"

/**
 * factorial -find the factorial of a number
 * @n: number to look for factorial
 * Return: -1 when n is lower than 0
 *        int when the number is greater than 0
 */

int factorial(int n)
{
int res;
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
res = (n * factorial(n - 1));
return (res);
}
}

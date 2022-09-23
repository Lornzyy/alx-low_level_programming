#include <stdio.h>

/**
 * main - function to
 * print sum of multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
int n, z = 0;
for (n = 0; n <= 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
z += n;
}
}
printf("%d", z);
return (0);
}

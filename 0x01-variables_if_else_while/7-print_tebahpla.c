#include<stdio.h>
/**
* main - Entry point
*
* Description: print the single digits of base 10
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}

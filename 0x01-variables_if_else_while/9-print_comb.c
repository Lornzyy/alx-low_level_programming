#include <stdio.h>
/**
* main - Entry point
*
* Description: prints all possible combinations of single-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
for (num = 0; num <= 8; num ++)
putchar(' ');
putchar(',');
}
putchar('\n');
return (0);
}

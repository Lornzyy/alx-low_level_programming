#include "main.h"
#include <stdlib.h>

/**
 * main - calculate the addition of arguments
 * @argc: count of arguments
 * @argv:array of strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i, j, sum = 0;
if (argc == 1)
{
printf("0\n");
}
if (argc >= 3)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}

#include "main.h"

/**
 * main - function to print all arguments
 * @argc: count of arguments
 * @argv: array of the strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i;
for (i  = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

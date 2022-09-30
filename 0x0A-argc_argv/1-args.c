#include "main.h"
#include <stdlib.h>

/**
 * main - function to print number of arguments
 * @argc: count of arguments
 * @argv: array of the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /* ignore argv */

printf("%d\n", argc - 1);

return (0);
}

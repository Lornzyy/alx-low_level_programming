#include "variadic_functions.h"

/**
 * print_strings - print the strings
 * @separator: the , separator
 * @n: the number of args
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(myString);
	va_start(myString, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(myString, char *));

		if (separator && (i < (n - 1)))

		{
			printf("%s", separator);
		}
	}
	printf("\n");
}


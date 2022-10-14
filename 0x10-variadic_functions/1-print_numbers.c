#include "variadic_functions.h"

/**
 * print_numbers - print the numbers
 * @separator: the sepator of the int
 * @n: the number of ints
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(myNumbers);
	va_start(myNumbers, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", va_arg(myNumbers, int));
	}
	printf("\n");

	va_end(myNumbers);
}


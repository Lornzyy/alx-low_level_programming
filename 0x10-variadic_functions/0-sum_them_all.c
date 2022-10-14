#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers
 * @n: const n
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list(myList);
	va_start(myList, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		result += va_arg(myList, int);
	}
	va_end(myList);

	return (result);
}


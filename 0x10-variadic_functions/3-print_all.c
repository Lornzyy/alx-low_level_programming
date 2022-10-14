#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_i - print int
 * @i: int
 * Return: Nothing
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_c - print char
 * @c: char
 * Return: Nothing
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_f - print float
 * @f: float
 * Return: Nothing
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - print string
 * @s: string
 * Return: Nothing
 */
void print_s(va_list s)
{
	if (s == NULL)
	{
		printf("nil");
	}

	printf("%s", va_arg(s, char *));
}


/**
 * print_all - print all chars and int and char *
 * @format: format to be printed
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	print_format p [] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_list  list;
	char *separ = "";

	va_start(list, format);

	while (format && format[i])
	{
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separ);
				p[j].f(list);
				separ = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}


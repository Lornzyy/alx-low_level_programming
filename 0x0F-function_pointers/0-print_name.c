#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: name to be printed
 * @f: function pointer
 * @: the argument to pass to the function pointer
 * Return: Nothing
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name_as_is - function to print name
 * @name: string name to be printed
 * Return: Nothing
 *
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
	if (strlen(name) == 0)
	{
		printf("No name was inseted");
	}
}

/**
 * print_name_uppercase - print name in uppercase
 * @name: name to be printed
 *
 * Return: Nothing
 *
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}

}
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan\n", print_name_uppercase);
	print_name(" ", print_name_as_is);
	printf("\n");

	return (0);
}

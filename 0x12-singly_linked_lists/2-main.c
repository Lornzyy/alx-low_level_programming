#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	list_t *head;

	head = NULL;

	add_node(&head, "Alex");
	add_node(&head, "Lorna");
	add_node(&head, "Wawoi");
	add_node(&head, "Zee");
	return (0);
}


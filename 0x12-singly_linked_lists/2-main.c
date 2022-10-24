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

	add_node_end(&head, "Alex");
	add_node_end(&head, "Lorna");
	add_node_end(&head, "Wawoi");
	add_node_end(&head, "Zee");
	print_list(head);
	
	return (0);
}


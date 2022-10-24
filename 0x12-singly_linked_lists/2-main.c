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
	add_node_end(&head, "lilian");
	print_list(head);
	free_list(head);
	head = NULL;
	
	return (0);
}


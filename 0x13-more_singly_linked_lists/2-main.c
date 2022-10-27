#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	listint_t *head;

	head = NULL;

	add_nodeint_end(&head,42);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 102);
	add_nodeint_end(&head, 496);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	free_listint(head);
	head = NULL;
	
	return (0);
}


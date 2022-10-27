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

	add_nodeint(&head,42);
	add_nodeint(&head, 98);
	add_nodeint(&head, 102);
	add_nodeint(&head, 496);
	add_nodeint(&head, 1024);
	print_listint(head);
	/*free_list(head);*/
	head = NULL;
	
	return (0);
}


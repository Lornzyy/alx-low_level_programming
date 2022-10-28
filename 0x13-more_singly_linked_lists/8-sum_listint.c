#include "lists.h"

/**
 * sum_listint - sun the nodes data of the linked list
 * @head: pointer to the head of the node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


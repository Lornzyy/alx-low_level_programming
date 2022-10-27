#include "lists.h"

/**
 * free_listint - free the list
 * @head: the pointer to the list_t
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
	}
}


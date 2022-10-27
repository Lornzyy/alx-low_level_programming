#include "lists.h"

/**
 * free_listint - free the list
 * @head: the pointer to the list_t
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}


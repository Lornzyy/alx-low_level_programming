#include "lists.h"

/**
 * free_listint - free the list
 * @head: the pointer to the list_t
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *current;

	current = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		temp = current;
		current = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}


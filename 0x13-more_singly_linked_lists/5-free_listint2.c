#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: the pointer to the list_t
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}


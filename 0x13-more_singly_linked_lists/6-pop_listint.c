#include "lists.h"

/**
 * pop_listint - delete a head node
 * @head: pointer to head
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if ((*head == NULL) || head == NULL)
	{
		return (0);
	}

	temp = *head;
	result = temp->n;
	*head = (*head)->next;
	free(temp);

	return (result);
}




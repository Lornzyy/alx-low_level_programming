#include "lists.h"

/**
 * add_node_end - add nodes to the linked list at the end
 * @head: double pointer to the address of the first node
 * @str: a constant char pointer
 * Return: list_t elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	unsigned int count = 0;
	list_t *newnode, *temp;

	temp = *head;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	duplicate = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = duplicate;
	newnode->len = count;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (*head);
}



#include "lists.h"

/**
 * add_node - add nodes to the linked list
 * @head: double pointer to the address of the first node
 * @str: a constant char pointer
 * Return: list_t elements
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	unsigned int count = 0;
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (str[count])
	{
		count++;
	}

	newnode->str = duplicate;
	newnode->len = count;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}


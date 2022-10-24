#include "lists.h"

/**
 * print_list -print the list and the number of elements
 * @h: pointer to the struct list_t
 * Return: list of elements and the number of elements
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp;
	
	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d]%s\n", temp->len, temp->str);
		}
		count++;
		temp = temp->next;
	}
	return (count);

}


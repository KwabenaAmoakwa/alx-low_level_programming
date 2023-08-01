#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: list
 * @index: index
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *mid;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	mid = (listint_t *)malloc(sizeof(listint_t));
	if (mid == NULL)
		return (NULL);

	mid = head;
	for (; mid != NULL; mid = mid->next)
	{
		if (i == index)
		{
			break;
		}
		i++;
	}
	return (mid);
}

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list
 * @idx: index
 * @n: number to be added to node
 *
 * Return: node;
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *mid, *temp;
	unsigned int c;

	if (*head == NULL)
		return (NULL);

	mid = (listint_t *)malloc(sizeof(listint_t));
	if (mid == NULL)
		return (NULL);

	temp = *head;

	if (idx == 0)
	{
		mid->next = *head;
		*head = mid;
		return (mid);
	}

	for (c = 0; temp && c < idx; c++)
	{
		if (c == idx - 1)
		{
			mid->n = n;
			mid->next = temp->next;
			temp->next = mid;
			return (mid);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}

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
	unsigned int c = 0;

	mid = (listint_t *)malloc(sizeof(listint_t));
	if (mid == NULL)
		return (NULL);

	temp = *head;

	for (; temp != NULL; temp = temp->next)
	{
		if (c == idx - 1)
		{
			mid->n = n;
			mid->next = temp->next;
			temp->next = mid;
		}
		c++;
	}
	return (mid);
}

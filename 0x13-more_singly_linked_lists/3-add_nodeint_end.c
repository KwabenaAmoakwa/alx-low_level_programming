#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: list
 * @n: struct listint_t member
 *
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mid, *temp;

	mid = (listint_t *)malloc(sizeof(listint_t));
	if (mid == NULL)
		return (NULL);
	mid->next = NULL;
	mid->n = n;

	if (*head == NULL)
	{
		*head = mid;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = mid;
	return (mid);
}

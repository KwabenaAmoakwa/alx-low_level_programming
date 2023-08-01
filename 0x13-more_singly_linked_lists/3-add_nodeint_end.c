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
	listint_t *mid;

	mid = (listint_t *)malloc(sizeof(listint_t));
	if (mid == NULL)
		return (NULL);
	for (; *head != NULL; *head = (*head)->next)
		{
		}
	
	mid->next = NULL;
	mid->n = n;
	(*head)->next = mid;
return (*head);
}

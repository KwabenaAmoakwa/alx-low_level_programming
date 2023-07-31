#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: list
 * @n: member of struct
 *
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mid;

	mid = (listint_t *)malloc(sizeof(listint_t));

	mid->next = *head;
	mid->n = n;

	*head = mid;

	return (*head);
}
